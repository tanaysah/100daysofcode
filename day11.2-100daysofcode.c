//day 11.2 - 100 days of code
//wap to calculate profit loss percent



#include <stdio.h>
int main() 
{
   float cp,sp,profit,loss;
   float prloss,profitper,lossper;
   printf("Enter the cost price of the product: ");
   scanf("%f", &cp);
   printf("Enter the selling price of the product: ");
   scanf("%f", &sp);
   if (sp>cp)
    {
        profit=sp-cp;
        profitper=profit/cp*100;
        printf("User has made a profit of %2.0f percent", profitper);
    }
   else
   {
       loss=cp-sp;
       lossper=loss/cp*100;
       printf("User has fucked up and made a loss of %2.0f percent", lossper);
   }
}