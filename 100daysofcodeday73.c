//day73- 100 days of code
//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

//tanaysah
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    
    int characters = 0;
    int words = 0;
    int lines = 0;
    
    int inWord = 0;  // Flag to track if we're inside a word

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Check if character is part of a word
        if (!isspace(ch)) {
            if (!inWord) {
                words++;       // Starting a new word
                inWord = 1;
            }
        } else {
            inWord = 0;        // We exited a word
        }
    }

    fclose(fp);

    // If last line doesn't end with a newline
    if (characters > 0 && ch == EOF) {
        lines++; 
    }

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}