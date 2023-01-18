#include<stdio.h>
int main()
{
    int n,s=0,rem,m;
    printf("enter the number\n");
    scanf("%d",&n);
    m=n*n;
    if(n%10==m%10)
    {
        printf("number isAutomorphic");
    }
    else
    {
        printf("number is not Automorphic");
    }
    
    return 0;

}