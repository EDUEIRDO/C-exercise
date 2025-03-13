//character occurrences - tabs, blanks adn newLines

#include <stdio.h>

int main()
{
    int character, i, newWhiteSpace, newOther;

    int numberDigit[10];

    newWhiteSpace = newOther = 0;

    for (i = 0; i < 10; ++i)
    {
        numberDigit[i] = 0;
    }
    while ((character = getchar()) != EOF)
    {
        if (character >= '0' && character <= '9')
        {
            ++numberDigit[character-'0'];
        }
        else if (character == ' ' || character == '\n' || character == '\t')
        {
            ++newWhiteSpace;
        }
        else
        {
            ++newOther;
        }
    }
    printf("digits =");
    for (i = 0; i < 10; ++i)
    {
        printf(" %d", numberDigit[i]);
    }
    printf(", white space = %d, other = %d\n", newWhiteSpace, newOther);
    return 0;    
}