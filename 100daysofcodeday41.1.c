
//day41.1- 100 days of code
//Count characters in a string without using built-in length functions.
//tanaysah

#include <stdio.h>

int main() {
    char str[1000];
    int count = 0, i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Count characters manually until null terminator '\0'
    while (str[i] != '\0') {
        if (str[i] != '\n') { // Ignore newline character (from fgets)
            count++;
        }
        i++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
