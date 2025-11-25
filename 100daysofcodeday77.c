//day77- 100 days of code
//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

//tanaysah
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    // Open input file for reading
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file for writing
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(in);
        return 1;
    }

    // Read each character and convert
    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);    // Convert to uppercase

        fputc(ch, out);          // Write to output file
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed! Check output.txt\n");

    return 0;
}