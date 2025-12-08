// Program: Find Maximum Element in Array using Recursion
#include <stdio.h>
int maxArray(int arr[], int n) {
    if(n == 1) return arr[0];
    int maxRest = maxArray(arr, n-1);
    return (arr[n-1] > maxRest) ? arr[n-1] : maxRest;
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Maximum = %d\n", maxArray(arr,n));
    return 0;
}
