//day91- 100 days of code
//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
//tanaysah

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);
    printf("%s %d %.2f", s.name, s.roll_no, s.marks);
    return 0;
}

