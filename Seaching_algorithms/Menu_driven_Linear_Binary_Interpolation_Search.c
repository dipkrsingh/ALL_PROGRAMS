#include<stdio.h>
int binarysearch(int *a,int *n,int *e);
int Linearsearch(int *arr, int *n, int *x);
int interpolationSearch(int *arr, int *n, int *x);
// 7 1 4 56 58 68 84 98
int binarysearch(int *a,int *n,int *e)
{
    int f,l,m;
    f=0;
    l=*n-1;
    while(f<=l)
    {
        m=(f+l)/2;
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
    for (i = 0; i < *n; i++)
        if (*(arr+i) == *x)
            return i;
    return -1;
}
int interpolationSearch(int *arr, int *n, int *x)
{
    int lo = 0, hi = (*n - 1);
    while (lo <= hi && *x >= *(arr+lo) && *x <= *(arr+hi))
    {
        if (lo == hi)
        {
            if (*(arr+lo) == *x) return lo;
            return -1;
        }
        int pos = (lo + ((hi - lo) / (*(arr+hi) - *(arr+lo)) * (*x - *(arr+lo))));

        if (*(arr+pos) == *x)
            return pos;

        if (*(arr+pos) < *x)
            lo = pos + 1;
        else
            hi = pos - 1;
    }
    return -1;
}
int main()
{
    while (1)
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
        for(i=0;i<n;i++)
        {
           printf("\nPosition -> %d | Element = %d",i+1,a[i]);
        }
        printf("\nEnter the element you want to search = ");
        scanf("%d",&b);
        printf("\nPress 1 for binary search(Array must be Sorted ):");
        printf("\nPress 2 for linear search:");
        printf("\nPress 3 for interpolation search(Array must be Sorted)");
        printf("\nEnter your choice = ");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:
              pos = binarysearch(a,&n,&b);
               if(pos!=-1)
               {
                    printf("\n:::Here the element searched with Binary search algorithm:::");
                    printf("\n\n\tElement found at position %d\n",pos+1);
               }
               else
               {
                    printf("\nElement is not found\n");
               }
               break;
          case 2:
              pos=Linearsearch(a,&n,&b);
               if(pos==-1)
               {
                   
                    printf("\n\n\tElement not found\n");
               }
               else
               {    printf("\n:::Here the element searched with Linear search algorithm:::");
                    printf("\n\n\tElement found at position %d\n",pos+1);
               }
               break;
          case 3:
              pos = interpolationSearch(a, &n, &b);
               if (pos != -1)
               {
                   printf("\n:::Here the element searched with Interpolation search algorithm:::");
                   printf("\n\n\tElement found at position %d\n",pos+1);
               }
               else
               {
                   printf("\nElement not found.");
               }
               break;
         }

     printf("\nDo you perform operation again (Y:N) : ");
     char ch;
     scanf(" %c",&ch);
     if(ch=='n'||ch=='N')
     {
         printf("\n\tEXIT\n");
         break;
     }

    }

    return 0;
}

