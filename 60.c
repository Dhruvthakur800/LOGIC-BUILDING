// Program: Decimal to Octal Conversion using Recursion
#include <stdio.h>
void decimalToOctal(int n) {
    if(n == 0) return;
    decimalToOctal(n/8);
    printf("%d", n%8);
}
int main() {
    int num;
    printf("Enter decimal number: ");
    scanf("%d", &num);
    if(num == 0) printf("0");
    else decimalToOctal(num);
    return 0;
}
