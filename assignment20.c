#include <stdio.h>

// Without using pointers
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swap (without pointers): a = %d, b = %d\n", a, b);
}

// Using pointers
void swapPointer(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(x, y);

    swapPointer(&x, &y);

    printf("After swap (using pointers): x = %d, y = %d", x, y);

    return 0;
}
