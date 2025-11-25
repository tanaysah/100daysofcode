//day96- 100 days of code
//Create Employee structure with nested Date structure for joining date and print details.
//tanaysah

#include <stdio.h>

// Nested structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure containing nested Date
struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;   // Nested structure
};

int main() {
    struct Employee e;

    // Taking input
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year);

    // Printing details
    printf("\n--- Employee Details ---\n");
    printf("ID            : %d\n", e.id);
    printf("Name          : %s\n", e.name);
    printf("Salary        : %.2f\n", e.salary);
    printf("Joining Date  : %02d-%02d-%04d\n",
           e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}
