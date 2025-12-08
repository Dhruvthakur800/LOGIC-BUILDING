// Program: Sum of Even Numbers up to N using Recursion
#include <stdio.h>
int sumEven(int n) {
    if(n <= 0) return 0;
    if(n % 2 != 0) n--;
    return n + sumEven(n-2);
}
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Sum of even numbers = %d\n", sumEven(n));
    return 0;
}
