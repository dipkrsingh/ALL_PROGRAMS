#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("Enter no. of rows in upper half = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
            {
                if(j==n+1-i||j==n-1+i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {

        for(j=1;j<=2*n-1;j++)
            {
                if(j==i+1||j==2*n-i-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
}
