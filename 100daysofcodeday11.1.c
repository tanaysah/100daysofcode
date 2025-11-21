//day 11.1 - 100 days of code
//wap to display the month name and number of days using switch-case for a given month number.calculate profit loss percent

#include<stdio.h>
int main(){
    int monthnumber;
    printf("Enter the month number: ");
    scanf("%d", &monthnumber);
    
    switch(monthnumber)
    {
        case 1:
        printf("January - 31 days");
        break;
        
        case 2:
        printf("Febrary - 29 days");
        break;
        case 3:
        printf("March - 31 days");
        break;
        case 4:
        printf("April - 30 days");
        break;
        case 5:
        printf("May - 31 days");
        break;
        case 6:
        printf("June - 30 days");
        break;
        case 7:
        printf("July- 31 days");
        break;
        case 8:
        printf("August - 31 days");
        break;
        case 9:
        printf("September - 30 days");
        break;
        case 10:
        printf("October - 31 days");
        break;
        case 11:
        printf("November - 30 days");
        break;
        case 12:
        printf("December - 31 days");
        break;
        default:
        printf("Invalid input! Please enter a number between 1 and 12.\n");
    }
    return 0;
}
    
