//day99- 100 days of code
//Use malloc() to allocate structure memory dynamically and print details.
//tanaysah

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student *s;
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter student ID: ");
    scanf("%d", &s->id);

    printf("Enter marks: ");
    scanf("%f", &s->marks);
    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", s->id);
    printf("Marks: %.2f\n", s->marks);
    free(s);

    return 0;
}
