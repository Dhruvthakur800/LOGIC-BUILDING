// Program: Print a Pattern (Stars) using Recursion
#include <stdio.h>
void printStars(int n) {
    if(n == 0) return;
    for(int i=0;i<n;i++) printf("*");
    printf("\n");
    printStars(n-1);
}
int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    printStars(n);
    return 0;
}
