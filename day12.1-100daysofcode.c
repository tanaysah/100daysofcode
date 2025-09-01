// Day 12.1 - 100 days of code
// WAP to calculate a library fine based on late days.

#include <stdio.h>
#include <string.h>

int main() {
    char studentname[50];
    int libid;
    int noofdayslate;
    char bookname[50];

    printf("Enter Student Name: ");
    fgets(studentname, sizeof(studentname), stdin);
    studentname[strcspn(studentname, "\n")] = 0; 

    printf("Enter student library card number: ");
    scanf("%d", &libid);
    getchar(); 

    printf("Enter issued book name: ");
    fgets(bookname, sizeof(bookname), stdin);
    bookname[strcspn(bookname, "\n")] = 0;  

    printf("Enter the number of days late: ");
    scanf("%d", &noofdayslate);

    
    printf("\n----- Library Fine Receipt -----\n");
    printf("Student Name   : %s\n", studentname);
    printf("Library Card # : %d\n", libid);
    printf("Book Issued    : %s\n", bookname);
    printf("Days Late      : %d\n", noofdayslate);

 
    if (noofdayslate <= 7) {
        printf("Late fee       : $100\n");
    } 
    else if (noofdayslate <= 15) {
        printf("Late fee       : $500 + issue of yellow card\n");
        printf("Warning        : More than two yellow cards will lead to red card\n");
        printf("Red Card       : Suspension of library card\n");
    } 
    else if (noofdayslate <= 30) {
        printf("Late fee       : $1000 + issue of yellow card\n");
        printf("Warning        : More than two yellow cards will lead to red card\n");
        printf("Red Card       : Suspension of library card\n");
    } 
    else if (noofdayslate <= 45) {
        printf("Late fee       : $2000 + issue of red card for 3 months\n");
        printf("Notice         : You have been suspended from using library for 3 months\n");
    } 
    else {
        printf("Late fee       : $5000 + Permanent ban from library\n");
    }

    printf("----- End of Receipt -----\n");

    return 0;
}
