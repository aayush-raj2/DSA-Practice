#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], cleaned[100];
    int i, j = 0, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Clean string: remove spaces & non-alphanumeric, convert to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum((unsigned char)str[i])) {
            cleaned[j++] = tolower((unsigned char)str[i]);
        }
    }
    cleaned[j] = '\0';

    len = strlen(cleaned);
    int isPalindrome = 1;

    for (i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is not a Palindrome.\n");

    return 0;
}

