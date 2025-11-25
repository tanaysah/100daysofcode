//day95- 100 days of code
//Return a structure containing top student's details from a function.
//tanaysah

#include <stdio.h>

// Define structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

// Function that returns structure
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    // Find student with highest marks
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  // Returning a structure
}

int main() {
    // Array of structure
    struct Student students[3] = {
        {101, "Tanay", 89.5},
        {102, "Rohan", 93.0},
        {103, "Aarav", 88.0}
    };

    // Get top student
    struct Student top = getTopStudent(students, 3);

    // Print returned structure
    printf("Top Student Details:\n");
    printf("Roll Number : %d\n", top.roll);
    printf("Name        : %s\n", top.name);
    printf("Marks       : %.2f\n", top.marks);

    return 0;
}
