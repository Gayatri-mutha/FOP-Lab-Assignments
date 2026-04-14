#include <stdio.h>

int main() {
    int choice, i, j, n;
    int a[10][10], b[10][10], sum[10][10];

    printf("1. Addition of matrices\n");
    printf("2. Saddle point\n");
    printf("3. Magic square check\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter size of matrix: ");
        scanf("%d", &n);

        printf("Enter first matrix:\n");
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);

        printf("Enter second matrix:\n");
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);

        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                sum[i][j]=a[i][j]+b[i][j];

        printf("Sum matrix:\n");
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++)
                printf("%d ",sum[i][j]);
            printf("\n");
        }
    }

    else if(choice == 2) {
        int min, col;

        printf("Enter size of matrix: ");
        scanf("%d",&n);

        printf("Enter matrix:\n");
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);

        for(i=0;i<n;i++) {
            min = a[i][0];
            col = 0;

            for(j=1;j<n;j++) {
                if(a[i][j] < min) {
                    min = a[i][j];
                    col = j;
                }
            }

            for(j=0;j<n;j++) {
                if(a[j][col] > min)
                    break;
            }

            if(j == n) {
                printf("Saddle point = %d", min);
                return 0;
            }
        }
        printf("No saddle point");
    }

    else if(choice == 3) {
        int sum1=0, sum2=0, flag=1;

        printf("Enter size of matrix: ");
        scanf("%d",&n);

        printf("Enter matrix:\n");
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);

        for(i=0;i<n;i++)
            sum1 += a[0][i];

        for(i=0;i<n;i++) {
            int row=0, col=0;
            for(j=0;j<n;j++) {
                row += a[i][j];
                col += a[j][i];
            }
            if(row != sum1 || col != sum1)
                flag=0;
        }

        for(i=0;i<n;i++) {
            sum2 += a[i][i];
        }

        if(sum2 != sum1)
            flag=0;

        sum2=0;
        for(i=0;i<n;i++) {
            sum2 += a[i][n-i-1];
        }

        if(sum2 != sum1)
            flag=0;

        if(flag)
            printf("Magic Square");
        else
            printf("Not Magic Square");
    }

    else {
        printf("Inverse not implemented (complex for beginner)");
    }

    return 0;
}
