//day74- 100 days of code
//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

//tanaysah
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    int ch;

    // Take source filename
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    // Take destination filename
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file for reading
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file '%s'\n", sourceFile);
        return 1;
    }

    // Open destination file for writing
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file '%s'\n", destFile);
        fclose(src);
        return 1;
    }

    // Copy contents using fgetc() and fputc()
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully!\n");

    fclose(src);
    fclose(dest);

    return 0;
}