
//day26.1- 100 days of code
/*
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
//tanaysah

#include <stdio.h>

int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
