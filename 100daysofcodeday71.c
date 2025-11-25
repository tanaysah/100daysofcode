//day71- 100 days of code
//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

//tanaysah
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode (creates the file if it doesn't exist)
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create the file.\n");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    getchar(); // Clear leftover newline (optional if needed)
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write to the file
    fprintf(fp, "Name: %sAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved to info.txt!\n");

    return 0;
}