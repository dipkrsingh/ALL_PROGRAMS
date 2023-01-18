#include<stdio.h>
void Spiral_matrix(int *a,int n,int m);
int main()
{
    int n,m,i,j;
    printf("Enter no. of rows=");
    scanf("%d",&n);
    printf("Enter no. of columns=");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter matrix = ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered Matrix : \n");
    int *p;
    /**p=mat;
    printf("%d %d\n",p,*p);*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            /*printf("%d %d\n",(p+i*m+j),*(p+i*m+j));*/
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    Spiral_matrix(a,n,m);
    return 0;
}
void Spiral_matrix(int *a,int n,int m)
{
    int r,c;
    r=n;
    c=m;
    int l,k,i,j,lr,lc;
    l=0;
    k=0;
    lr=n-1;
    lc=m-1;
    printf("\nSpiral Form of Entered Matrix : \n");
    while(l<=lc && k<=lr)
    {
            for(i=l;i<=lc;i++)
                printf("%d ",*(a+k*m+i));
            k++;
            for(i=k;i<=lr;i++)
                printf("%d ",*(a+i*m+lc));
            lc--;
            if(k<=lr)
                {
                    for(i=lc;i>=l;i--)
                        printf("%d ",*(a+lr*m+i));
                    lr--;
                }
            if(l<=lc)
            {
                for(i=lr;i>=k;i--)
                    printf("%d ",*(a+i*m+l));
                l++;
            }
    }
}

