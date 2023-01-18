#include<stdio.h>
#include<conio.h>
int * insertion_sort(int *a,int size)
{
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        j=i-1;
        temp = a[i];
        while(j>-1 && a[j]>temp)
            {
                a[j+1]=a[j];
                j--;
            }
        a[j+1]=temp;
    }
    return a;
}
int * merging(int a[],int b[],int c[],int n,int m)
{
     int i,j,temp,size,*s;
     for(i=0;i<n;i++)
        c[i]=a[i];
     for(i=0;i<m;i++)
        c[n+i]=b[i];
     size=m+n;
     s = insertion_sort(c,size);
     return s;
}
int main()
{
    int arr1[20],arr2[20],arr3[40],n,m,i;
    int *a;
    printf("Enter size of array 1 = ");
    scanf("%d",&n);
    printf("Enter array 1 = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of array 2 = ");
    scanf("%d",&m);
    printf("Enter array 2 = ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    a = merging(arr1,arr2,arr3,n,m);
    printf("\nMerged and Sorted Array = \n");
    for(i=0;i<(n+m);i++)
    {
        printf("%d\t",*(a+i));
    }
    getch();
    return 0;
}
