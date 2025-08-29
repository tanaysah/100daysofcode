
//day 3.1, 100daysofcode
// wap to covert temperature from celsius to fahrenheit

#include <stdio.h>
int main() 
{
    float celciustemp, farehnitetemp;
     printf ("Enter the tempertaure :");
     scanf ("%f", &celciustemp);
      farehnitetemp=(celciustemp*9/5)+32;
       printf ("the farehnite temp is %f \n", farehnitetemp);
       return 0;
 }