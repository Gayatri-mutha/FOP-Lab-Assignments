#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i, pass = 1;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);

        if(marks[i] < 40) {
            pass = 0;
        }

        total += marks[i];
    }

    if(pass == 0) {
        printf("Result: FAIL");
    } else {
        percentage = total / 5;
        printf("Result: PASS\n");
        printf("Percentage = %.2f\n", percentage);

        if(percentage >= 75)
            printf("Grade: Distinction");
        else if(percentage >= 60)
            printf("Grade: First Division");
        else if(percentage >= 50)
            printf("Grade: Second Division");
        else if(percentage >= 40)
            printf("Grade: Third Division");
    }

    return 0;
}
