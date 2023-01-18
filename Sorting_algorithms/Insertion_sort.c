#include<stdio.h>
// 7 4 8 3 9 1 2 5
int* Insertion_sort(int *a,int *n)
{
    int i, temp, j,c=0;
    for (i = 1; i < *n; i++)
    {
        temp = *(a+i);
        j = i - 1;
        while (j >= 0 && *(a+j) > temp)
        {
            *(a+j + 1) = *(a+j);
            j = j - 1;
            c++;
        }
        *(a+j + 1) = temp;
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
    printf("Enter elements :\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    int *b = Insertion_sort(a,&n);
    printf("Sorted array = ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(b+i));
    }
    return 0;

}
