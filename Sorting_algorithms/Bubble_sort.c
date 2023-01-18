#include<stdio.h>
// 7 4 8 3 9 1 2 5
int* Bubble_sort(int *a,int *n);
int* Bubble_sort(int *a,int *n)
{
    int i,j,temp,c=0;
    for(i=0;i<*n-1;i++)
    {
        for(j=0;j<*n-i-1;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
                c++;
            }
        }
    }
    printf("%d\n",c);
    return a;
}
int main()
{
    printf("Enter array size = ");
    int n,i;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter element %d = ",i+1);
        scanf("%d",&a[i]);
    }
    int *b = Bubble_sort(a,&n);
    printf("Sorted array = ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(b+i));
    }
    return 0;

}
