#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the row number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=(2*(n-1))+1;j++)
        {
            if(j>=(n+1)-i && j<=(n-1)+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {

        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-i && j<=n+i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
