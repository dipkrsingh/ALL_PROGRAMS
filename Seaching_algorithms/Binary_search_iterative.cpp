#include<stdio.h>
int binarysearch(int a[],int n,int e)
{
    int f,l,m;
    f=0;
    l=n-1;

    while(f<=l)
    {
        m=(f+l)/2;
        if(e==a[m])
            return(m);
        else
            if(e>a[m])
                f=m+1;
            else
                l=m-1;
    }

    return -1;
}
int main()
{
    int n,b,pos,i;
    printf("\nEnter the array size = ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element you want to search = ");
    scanf("%d",&b);
    pos = binarysearch(a,n,b);
    if(pos!=-1)
    {
        printf("\nElement found at position %d",pos+1);
    }
    else
    {
        printf("\nElement is not found");
    }
    return 0;

}
