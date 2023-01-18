#include<stdio.h>
int main()
{
    int a[20][20];
    int i,j,n;
    printf("enter the matrix order =");
    scanf("%d",&n);
    printf("enter the values\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enterd matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    int s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i==n-1||i==j||i+j==n-1)
            {s+=a[i][j];
            printf("%d+",a[i][j]);}
        }
    }
    printf("=");
    printf("%d",s);
    return 0;

}
