#include <stdio.h>

#define IN 1
#define OUT 0
// O codigo le um caractere, imprime e continua ate receber um EOF
int main()
{
  int c;

  c = getchar();
  while (c != EOF)
  {
    printf("%d\n", c != EOF);
    putchar(c);
    c = getchar();
  }

  printf("%d\n", c != EOF);
  return 0;
}


int main()
{
  long nc;

  nc = 0;
  while (getchar() != EOF)
  {
    ++nc;
    printf("%1d\n", nc);
  }

  return 0;
}

int main()
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
  {
    printf("%.0f\n", nc);
  }
}



// count lines, tabs and blanks
int main()
{
  int c, blanks = 0, tabs = 0, newLines = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      ++blanks;
    }
    else if (c == '\t')
    {
      ++tabs;
    }
    else if (c == '\n')
    {
      ++newLines;
    }

  }
  printf("Espaços em branco: %d\n", blanks);
  printf("Tabulações: %d\n", tabs);
  printf("Novas linhas: %d\n", newLines);
  return 0;
}



#define IN 1
#define OUT 0

int main()
{
  int c, nl, nw, nc, state;

  state = OUT;

  nl = nw = nc = 0;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("nl nw nc\n%d %d %d\n", nl, nw, nc);
  return 0;
}
