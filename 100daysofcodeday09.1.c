//day 9.1- 100 days of code
//wap to to find the roots of a quadratic eqution and categroize them

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are REAL and DISTINCT: %.2lf and %.2lf\n", root1, root2);
    }
    else if (D == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are REAL and EQUAL: %.2lf and %.2lf\n", root1, root2);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("Roots are IMAGINARY: %.2lf + %.2lfi and %.2lf - %.2lfi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
