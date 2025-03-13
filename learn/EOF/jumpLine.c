#include <stdio.h>

#define IN 1 // Inside a word
#define OUT 0 // Outside a word

int main()
//This code jump the line if have tabs, \n or ' ' spaces
{
  int character, state;

  state = OUT;
  while ((character = getchar()) != EOF)
  {
    if (character == ' ' || character == '\n' || character == '\t')
    {
      if (state == IN)
      {
        printf("\n");
        state = OUT;
      }
    }
    else if (state == OUT)
    {
      state = IN;
      printf("%c", character);
    }
    else
    {
      printf("%c", character);
    }
  }
  return 0;
}
