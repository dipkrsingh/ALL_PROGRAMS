#include<stdio.h>
int main()
{
    int n;
    printf("enter row no=");
    scanf("%d",&n);
    int i,j;
    for( i=n;i>=1;i--)
    {
        for( j=1;j<=n;j++)
        {
            if(j>=1 && j<=i)
                printf("%d ",i*j);
        }
        printf("\n");
    }

    return 0;
}

