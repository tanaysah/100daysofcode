
//day44.2- 100 days of code
// Replace spaces with hyphens in a string.
//tanaysah

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    // Print modified string
    printf("Modified string: %s", str);

    return 0;
}
