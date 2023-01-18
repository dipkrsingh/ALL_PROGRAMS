#include<stdio.h>
int main()
{
    int n,s=0,rem,m;
    printf("enter the number\n");
    scanf("%d",&n);
    m=n*n;
    while(m!=0)
    {
        rem=m%10;
        s+=rem;
        m/=10;
    }
    if(s==n)
    {
        printf("number is neon");
    }
    else
    {
        printf("number is not neon");
    }
    
    return 0;

}