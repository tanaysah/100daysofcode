
//day29.1- 100 days of code
// Find the sum of array elements.
//tanaysah

#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
