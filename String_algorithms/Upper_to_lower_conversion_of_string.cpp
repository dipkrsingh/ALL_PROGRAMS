#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("enter the lowercase character\n");
    scanf("%c",&a);
    printf("your enterd character in uppercase is = %c",toupper(a));
    return 0;
}