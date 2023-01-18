#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],i,c=0;
    printf("enter the string = ");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
         c++;
    }
    printf("Number of vowels in given string = %d",c);
    return 0;
}
