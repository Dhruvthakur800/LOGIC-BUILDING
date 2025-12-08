// Program: Search an Element in an Array (Linear Search)
#include <stdio.h>
int main() {
    int n, key, found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++) if(arr[i]==key) found=1;
    if(found) printf("Element found\n");
    else printf("Element not found\n");
    return 0;
}
