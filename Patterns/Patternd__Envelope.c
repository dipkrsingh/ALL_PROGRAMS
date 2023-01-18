#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("enter number of row\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=2*n-1;j++)
            {
                if(j==i||j==2*n-i||i==1||j==1||j==2*n-1)
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
                if(j==n-i||j==n+i||i==n-1||j==1||j==2*n-1)
                    printf("*");
                else
                    printf(" ");

            }
            printf("\n");
    }

}

