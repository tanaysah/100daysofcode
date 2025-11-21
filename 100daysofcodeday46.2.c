// Day 46.2 - 100 Days of Code
//Find the first repeating lowercase alphabet in a string.
// tanaysah

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to find the first repeating lowercase alphabet
char findFirstRepeating(char *str) {
    int count[26] = {0}; // Array to count occurrences of each letter (a-z)
    
    // First pass: count all lowercase letters
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            count[str[i] - 'a']++;
        }
    }
    
    // Second pass: find the first character that has count > 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]) && count[str[i] - 'a'] > 1) {
            return str[i];
        }
    }
    
    return '\0'; // No repeating character found
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    char result = findFirstRepeating(str);
    
    if (result != '\0') {
        printf("First repeating lowercase letter: %c\n", result);
    } else {
        printf("No repeating lowercase letter found.\n");
    }
    
    return 0;
}