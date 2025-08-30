//day 5.1 - 100 days of code
// wap to calculat the simple and compount intrest for given principle, rate and time.

#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,ti,si;
    float cirate,ciprinci,ci,cino,citime;
    
    //simple intrest
    
    printf("Enter the principal value of loan: ");
    scanf("%f", &principal);
    printf("Enter the rate of intrest of loan: ");
    scanf("%f", &rate);
    printf("Enter the time of loan: ");
    scanf("%f", &ti);
 {  
    si=principal*rate*ti/100;
    printf("Calculating Simple Intrest \n");
    printf("SI is %2f \n\n", si);
 }
    //compound intrest
    printf("Calculating Compount intrest\n");
    printf("Enter the amount you started with: ");
    scanf("%f", &ciprinci);
    printf("Enter the annual rate of intrestL: ");
    scanf("%f", &cirate);
    printf("Amount of time the intrest is compounded: ");
    scanf("%f", &cino);
    printf("Time of this thing: ");
    scanf("%f", &citime);
    
    {
     ci = ciprinci * pow((1 + cirate / cino), (cino * citime));
    printf("Compound intrest is: %f", ci);
    }  
}