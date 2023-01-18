#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[100];
    printf("enter the lower case word\n");
    gets(a);
    printf("enter the upper case word = %s",strupr(a));
    return 0;

}