//day98- 100 days of code
//Take two structs as input and check if they are identical.
//tanaysah


#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    struct Student s1, s2;

    printf("Enter first student details:\n");
    printf("ID: ");
    scanf("%d", &s1.id);
    printf("Name: ");
    scanf("%s", s1.name);

    printf("\nEnter second student details:\n");
    printf("ID: ");
    scanf("%d", &s2.id);
    printf("Name: ");
    scanf("%s", s2.name);

    if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0) {
        printf("\nBoth structures are IDENTICAL.\n");
    } else {
        printf("\nStructures are NOT identical.\n");
    }

    return 0;
}
