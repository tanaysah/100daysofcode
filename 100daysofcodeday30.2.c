
//30.2- 100 days of code
// Count positive, negative, and zero elements in an array.
//tanaysah

#include <stdio.h>

int main() {
    int n, pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }
    printf("Positive: %d\nNegative: %d\nZero: %d", pos, neg, zero);
    return 0;
}
