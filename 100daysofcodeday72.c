//day72- 100 days of code
//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

//tanaysah
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[500];

    // Ask the user for a filename (optional)
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    printf("\n--- File Content ---\n");

    // Read each line using fgets() until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}