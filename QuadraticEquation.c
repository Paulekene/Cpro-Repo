#include <math.h>//import math standard library and C standard library
#include <stdio.h>
int main() {
    double a, b, c, D, x1, x2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b * b - 4 * a * c; // determine the value of the descriminant

    // condition for real and different roots
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", x1, x2);
    }

    // condition for real and equal roots
    else if (D == 0) {
        x1 = x2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", x1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 