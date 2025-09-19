#include <stdio.h>
#include <math.h>  // Required for sqrt()

int main() {
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Square root of a negative number is not real.\n");
    }
    else {
        result = sqrt(num);   // sqrt() function
        printf("Square root of %.2lf = %.2lf\n", num, result);
    }

    return 0;
}