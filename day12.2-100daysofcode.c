// Day 12.2 - 100 days of code
// WAP to calculate a electricity bill


#include<stdio.h>
int main()
{
    printf("\t\tWelcome to Uttarakhand Power Corporation Limited \n\t\t\t\t\t\tPay bill online \n\t\t\t\tEnter your bill details below\n\n");
    
    int service;
    float unit, unitbill, totalbill;
    
    printf("Enter your service connection number: ");
    scanf("%d", &service);
    printf("Unit consumed: ");
    scanf("%f", &unit);
    
    unitbill=unit*4;  //cost of 1 unit = 4 rupey per unit
    totalbill=unitbill+28; //servicecharge
    
    printf("\n----- Electricity bill receipt -----\n\n");
    printf("Unit bill charge: $%f \n", unitbill);
    printf("Service charge: $28 \n");
    printf("Total bill: $%f \n\n", totalbill);
    printf("----- End of Receipt -----\n");    
}