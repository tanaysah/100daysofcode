//day100- 100 days of code
//Use pointer to struct to modify and display data using -> operato
//tanaysah

#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student s;
    struct Student *ptr = &s;
    ptr->id = 101;
    strcpy(ptr->name, "Tanay Sah");
    ptr->marks = 92.5;
    printf("Student Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
