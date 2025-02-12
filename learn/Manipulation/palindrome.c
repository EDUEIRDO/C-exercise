#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char* word) {
    int init = 0;
    int end = strlen(word) - 1;

    while (init < end) {
        if (word[init] != word[end]) {
            return false;
        }
        init++;
        end--;
    }
    return true;
}

int main() {
    char word[] = "arara";

    if(isPalindrome(word)) {
        printf("Is a palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}