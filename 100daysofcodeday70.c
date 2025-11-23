//day70- 100 days of code
//Write a program to take a string input. Change it to sentence case.

//tanaysah
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to sentence case
    int i = 0;

    // Convert the first non-space character to uppercase
    while (str[i] == ' ')  
        i++;               // Skip leading spaces

    if (str[i] != '\0')
        str[i] = toupper(str[i]);   // First character uppercase

    // Convert the rest to lowercase
    i++;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }

    // Output the result
    printf("Sentence case: %s", str);

    return 0;
}