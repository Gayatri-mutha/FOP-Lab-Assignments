#include <stdio.h>

// Function without recursion
int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function with recursion
int factorialRec(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorialRec(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial (without recursion) = %d\n", factorial(num));
    printf("Factorial (with recursion) = %d", factorialRec(num));

    return 0;
}
