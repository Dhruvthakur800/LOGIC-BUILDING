// Program: Count Vowels in a String using Recursion
#include <stdio.h>
#include <string.h>
int countVowels(char str[], int i) {
    if(str[i] == '\0') return 0;
    char c = str[i];
    int isVowel = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') ? 1 : 0;
    return isVowel + countVowels(str, i+1);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Vowels = %d\n", countVowels(str,0));
    return 0;
}
