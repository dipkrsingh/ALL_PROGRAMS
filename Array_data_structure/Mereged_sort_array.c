#include<stdio.h>
void merge(int *a,int *b,int n,int m)
{
    int s;
    s=n+m;
    int c[s];
    int i,j,k;
    i=j=k=0;
    while(i<n && j<m)
    {
        if(a[i] <= b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<m)
    {
        c[k++]=b[j++];
    }
    printf("\nSorted and Merged Array = \n");
    for(i=0;i<s;i++)
        printf("%d  ",c[i]);
}
int main()
{
    int a[20],b[20],n,m,i;
    printf("Enter size of 1st array = ");
    scanf("%d",&n);
    printf("Enter size of 2nd array = ");
    scanf("%d",&m);
    printf("Enter 1st array (must be sorted) = ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter 2nd array (must be sorted) = ");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    merge(a,b,n,m);
    getch();
    return 0;
}
