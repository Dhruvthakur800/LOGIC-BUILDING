// Program: Count Even and Odd Numbers in an Array
#include <stdio.h>
int main() {
    int n, even=0, odd=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) even++;
        else odd++;
    }
    printf("Even = %d, Odd = %d\n",even,odd);
    return 0;
}
