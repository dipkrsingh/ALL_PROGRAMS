#include<stdio.h>
// 7 4 8 3 9 1 2 5
int* Selection_sort(int *a,int *n);
int* Selection_sort(int *a,int *n)
{
    int i,c=0,d=0, j, min,temp;
    for (i = 0; i < *n-1; i++)
    {

        min = i;
        for (j = i+1; j < *n; j++)
          {
            if (*(a+j) < *(a+min))
              {min = j;d++;}
              c++;
          }
        temp = *(a+min);
        *(a+min)=*(a+i);
        *(a+i)=temp;
    }
   printf(" c = %d \n",c);
   printf(" d = %d \n",d);
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
    int *b = Selection_sort(a,&n);
    printf("Sorted array = ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(b+i));
    }
    return 0;

}
