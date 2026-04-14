#include <stdio.h>

int main() {
    int a, b, i, gcd, scd = -1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Smallest Common Divisor (other than 1)
    for(i = 2; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            scd = i;
            break;
        }
    }

    if(scd != -1)
        printf("Smallest Common Divisor = %d\n", scd);
    else
        printf("No common divisor other than 1\n");

    // GCD
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("GCD = %d", gcd);

    return 0;
}
