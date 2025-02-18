#include <stdio.h>
#include <sqlite3.h>

int insert() {
    sqlite3 *db;
    char *errMsg = 0;

    int rc = sqlite3_open("user_data.db", &db);

    if (rc) {
        fprintf(stderr, "Error opening database.\n", sqlite3_errmsg(db));
        return 1;
    }
    printf("Database opened successfully.\n");
    return 0;

    char query[256];
    char name[50] = "Carlos Tenorio";
    int age = 20;

    snprintf(query, sizeof(query), "INSERT INTO users (name, age) VALUES ('%s', %d);", name, age);

    rc = sqlite3_exec(db, query, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "Error creating user: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        printf("user created successfully.\n");
    }
    sqlite3_close(db);
    return 0;
}

void delete() {
    
}

int main() {
    sqlite3 *db;
    char *errMsg = 0;

    int rc = sqlite3_open("user_data.db", &db);

    if (rc) {
        fprintf(stderr, "Error opening database.\n", sqlite3_errmsg(db));
        return 1;
    }
    printf("Database opened successfully.\n");
    return 0;

    const char *sql = "CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, name TEXT NOT NULL, age INTEGER);";

    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Error creating table: %s\n", &errMsg);
        sqlite3_free(errMsg);
    } else {
        printf("Table created successfully.\n");
    }

    insert();

    sqlite3_close(db);
    return 0;
}