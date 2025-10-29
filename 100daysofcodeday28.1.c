
//day28.1- 100 days of code
// Write a program to print all the prime numbers from 1 to n.
//tanaysah

#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int l, h;
    scanf("%d %d", &l, &h);
    for (int i = l; i <= h; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
