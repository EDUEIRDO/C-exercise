#include <microhttpd.h>
#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PORT 8888
#define DB_FILE "example.db"

// Function to initialize the database
void init_db() {
    sqlite3 *db;
    char *err_msg = 0;
    int rc = sqlite3_open(DB_FILE, &db);
    if (rc != SQLITE_OK) {
      fprintf(stderr, "Error opening database: %s\n", sqlite3_errmsg(db));
      sqlite3_close(db);
      exit(1);
    }
  
    const char *sql = "CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, name TEXT UNIQUE);";
    rc = sqlite3_exec(db, sql, 0, 0, &err_msg);
    if (rc != SQLITE_OK) {
      fprintf(stderr, "Error creating table: %s\n", err_msg);
      sqlite3_free(err_msg);
    }
    sqlite3_close(db);
  }

static int send_page(struct MHD_Connection *connection, const char *page)
{
    int ret;
    struct MHD_Response *response;

    response = MHD_create_response_from_buffer(strlen(page), (void *)page, MHD_RESPMEM_PERSISTENT);
    if (!response)
        return MHD_NO;
    MHD_add_response_header(response, MHD_HTTP_HEADER_CONTENT_TYPE, "text/html");
    ret = MHD_queue_response(connection, MHD_HTTP_OK, response);
    MHD_destroy_response(response);

    return ret;
}

static int insert_name(const char *name)
{
    sqlite3 *db;
    sqlite3_stmt *stmt;
    int rc;

    rc = sqlite3_open("example.db", &db);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        return rc;
    }

    const char *sql = "INSERT INTO users (name) VALUES (?);";
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "Failed to prepare statement: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return rc;
    }

    sqlite3_bind_text(stmt, 1, name, -1, SQLITE_STATIC);
    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE)
    {
        fprintf(stderr, "Execution failed: %s\n", sqlite3_errmsg(db));
    }

    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return rc == SQLITE_DONE ? SQLITE_OK : rc;
}

enum MHD_Result answer_to_connection(void *cls, struct MHD_Connection *connection,
                                const char *url, const char *method, const char *version,
                                const char *upload_data, size_t *upload_data_size, void **con_cls)
{
    static int dummy;
    if (0 != strcmp(method, "POST"))
    {
        const char *page = "<html><body><form action=\"/\" method=\"POST\">Name: <input name=\"name\" type=\"text\" /><input type=\"submit\" value=\"Submit\" /></form></body></html>";
        return send_page(connection, page);
    }

    if (&dummy != *con_cls)
    {
        *con_cls = &dummy;
        return MHD_YES;
    }

    if (*upload_data_size != 0)
    {
        char name[256];
        sscanf(upload_data, "name=%255s", name);
        insert_name(name);
        *upload_data_size = 0;
        return MHD_YES;
    }

    const char *response_page = "<html><body>Thank you!</body></html>";
    return send_page(connection, response_page);
}

int main()
{
    struct MHD_Daemon *daemon;



    daemon = MHD_start_daemon(MHD_USE_INTERNAL_POLLING_THREAD, PORT, NULL, NULL,
                              &answer_to_connection, NULL, MHD_OPTION_END);
    init_db();
    if (NULL == daemon)
        return 1;

    printf("Server running on port %d\n", PORT);
    getchar();

    MHD_stop_daemon(daemon);
    return 0;
}