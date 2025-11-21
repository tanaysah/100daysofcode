//day 5.2 - 100 days of code
// wap to input time in seconds and then convert it into hours, minutes and seconds

#include<stdio.h>
int main()
{
    int tinsec, hrs,mins,secs;
    
    printf("Enter time in seconds: ");
    scanf("%d", &tinsec);
   
    
    hrs = tinsec / 3600;           // 1 hour = 3600 seconds
    mins = (tinsec % 3600) / 60;   // Remaining minutes
    secs = tinsec % 60;            // Remaining seconds

    printf("Time: %d hours %d minutes %d seconds\n", hrs, mins, secs);

    return 0;

}
