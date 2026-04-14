#include <stdio.h>

int main() {
    int choice, i;
    int a, b, result = 1;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 5) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
    } else if(choice == 6) {
        printf("Enter a number: ");
        scanf("%d", &a);
    }

    switch(choice) {
        case 1:
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Result = %d", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case 5:
            for(i = 1; i <= b; i++) {
                result = result * a;
            }
            printf("Result = %d", result);
            break;

        case 6:
            result = 1;
            for(i = 1; i <= a; i++) {
                result = result * i;
            }
            printf("Result = %d", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
