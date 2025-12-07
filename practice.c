
#include <stdio.h>

int main() {
    int roll_no;
    printf("enter the roll no:");
    scanf("%d",&roll_no);
    switch(roll_no){
        case 1:
            printf("your name is dhruv");
            break;
        case 2:
            printf("your name is  shakti");
            break;
        case 3:
            printf("your name is sachin");
            break;
        default:
            printf("invalid input");
    }    
    printf("Thank you");
        return 0;
}
 

#include <stdio.h>
  int main() {
    int n, i=1;
    printf("enter the number:");
    scanf("%d",& n);
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
        
        }

#include <stdio.h>
  int main() {
    int rows;
    printf("enter the raws:");
    scanf("%d",& rows);
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
    }

#include <stdio.h>
  int main() {
    int n;
    printf("enter the number:");
    scanf("%d",& n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
    }



#include <stdio.h>

int main() {
    int n, i, j, space;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
÷
 
// Wap to convert the length of string 
# include <stdio.h>
int string_length(char str[]) {
    int length = 0; 
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    return length;
}
int main() {
    char str[100];
    printf("enter a string:");
    fgets(str, sizeof(str), stdin);             
    int length = string_length(str);
    printf("length of string: %d", length - 1); // Subtracting 1 to exclude the newline character
    return 0;
}
// 