// Program: Sum of Squares of First N Numbers using Recursion
#include <stdio.h>
int sumSquares(int n) {
    if(n == 0) return 0;
    return n*n + sumSquares(n-1);
}
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Sum of squares = %d\n", sumSquares(n));
    return 0;
}
