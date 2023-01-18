#include<stdio.h>
int binarysearch(int *a,int *n,int *e)
{
    int f,l,m;
    f=0;
    l=*n-1;
    while(f<=l)
    {
        m=f+(l-f)/2;
        if(*e==*(a+m))
            return(m);
        else
            if(*e>*(a+m))
                f=m+1;
            else
                l=m-1;
    }

    return -1;
}
int Linearsearch(int *arr, int *n, int *x)
{
    int i;
    for (i = 0; i < n; i++)
        if (*(arr+i) == *x)
            return i;
    return -1;
}
int main()
{
    int n,b,pos,i,choice;
    printf("\nEnter the array size = ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered array\n");
    printf("\nPosition ->");
    for(i=0;i<n;i++)
    {
        printf("   %d",i+1);
    }
    printf("\n           ");
    for(i=0;i<n;i++)
    {
        printf("   -");
    }
    printf("\nElements ->");
    for(i=0;i<n;i++)
    {
        printf("   %d",a[i]);
    }printf("\n\n");
    printf("\nEnter the element you want to search = ");
    scanf("%d",&b);
    printf("\nPress 1 for binary search:");
    printf("\nPress 2 for linear search:");
    printf("\nEnter your choice = ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:pos = binarysearch(a,&n,&b);
               if(pos!=-1)
               {
                    printf("\nElement found at position %d\n",pos+1);
               }
               else
               {
                    printf("\nElement is not found\n");
               }
               break;
        case 2:pos=Linearsearch(a,&n,&b);
               if(pos==-1)
               {
                    printf("\nElement is not found\n");
               }
               else
               {
                    printf("\nElement found at position %d\n",pos+1);
               }
               break;
    }
    return 0;
}
