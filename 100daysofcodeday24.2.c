
//day24.2- 100 days of code
/*Write a program to print the following pattern:
1
12
123
1234
12345
*/
//tanaysah

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
