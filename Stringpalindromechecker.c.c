#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int i, j;
    char str[20];
    printf("enter a string : ");
    scanf("%s",str);
    j = strlen(str);
    for(i = 0, j =j-1 ; str[i]==str[j] ; i++,j--);
    if(i > j)
    {
        printf("%s is a palindrome string",str);
    }
    else
    {
        printf("%s is not a palindrome string",str);
    }
   
    return 0;
}