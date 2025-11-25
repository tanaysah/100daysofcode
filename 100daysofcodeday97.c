//day97- 100 days of code
//Store employee data in a binary file using fwrite() and read using fread().
//tanaysah

#include <stdio.h>

// Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    // Take input for employee
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e1.salary);

    // -----------------------------
    // Write to binary file
    // -----------------------------
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // -----------------------------
    // Read from binary file
    // -----------------------------
   fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // -----------------------------
    // Display read data
    // -----------------------------
    printf("\n--- Employee Data Read From File ---\n");
    printf("ID     : %d\n", e2.id);
    printf("Name   : %s\n", e2.name);
    printf("Salary : %.2f\n", e2.salary);

    return 0;
}
