// Program: Count Occurrences of a Digit in a Number using Recursion
#include <stdio.h>
int countDigit(int n, int d) {
    if(n == 0) return 0;
    int last = (n%10 == d) ? 1 : 0;
    return last + countDigit(n/10, d);
}
int main() {
    int num, digit;
    printf("Enter number and digit to count: ");
    scanf("%d %d", &num, &digit);
    printf("Occurrences = %d\n", countDigit(num, digit));
    return 0;
}
