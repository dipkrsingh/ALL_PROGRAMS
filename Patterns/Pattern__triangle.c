#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number of rows\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=2*n-1;j++)
    {
        if(j==n+1-i||j==n-1+i||(i==n && j%2!=0))
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}
}
