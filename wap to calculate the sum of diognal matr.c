// wap to calculate the sum of diognal matrix elements and check the total is even or odd using function.
#include <stdio.h>


int diagonalSum(int mat[10][10], int n) {
    int i, sum = 0;

    for (i = 0; i < n; i++) {
        sum = sum + mat[i][i];   
    }

    return sum;
}

int main() {
    int mat[10][10], n, i, j, sum;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    sum = diagonalSum(mat, n);

    printf("\nSum of diagonal elements = %d\n", sum);

    if (sum % 2 == 0)
        printf("The sum is EVEN.\n");
    else
        printf("The sum is ODD.\n");

    return 0;
}
