#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0, term;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        int fact = 1, j;
        int power = 2*i - 1;

        // calculate factorial
        for(j = 1; j <= power; j++) {
            fact = fact * j;
        }

        term = sign * pow(x, power) / fact;
        sum = sum + term;

        sign = -sign;
    }

    printf("Sum of sine series = %f", sum);

    return 0;
}
