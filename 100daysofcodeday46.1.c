// Day 46.1 - 100 Days of Code
//Remove all vowels from a string.
// tanaysah 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to remove vowels from a string
void removeVowels(char *str) {
    int i, j = 0;
    
    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    printf("Original string: %s\n", str);
    
    removeVowels(str);
    
    printf("String without vowels: %s\n", str);
    
    return 0;
}