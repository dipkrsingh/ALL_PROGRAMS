#include<stdio.h>
int* Bubble_sort(int *a,int n);
int* Insertion_sort(int *a,int n);
int* Selection_sort(int *a,int n);
void Display_array(int *a,int n);
int main()
{
    char ch;
    do
    {
    printf("Enter array size = ");
    int n,i,choice;
    int *b;
    scanf("%d",&n);
    int a[n];
    printf("Enter elements :\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("User enetered array => ");
    for(i=0;i<n;i++)
    {

        printf("%d\t",a[i]);
    }
    printf("\n\n");
    printf("Enter 1 to use Bubble sort\n");
    printf("Enter 2 to use Insertion sort\n");
    printf("Enter 3 to use Selection sort\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:b = Bubble_sort(a,n);
               printf("\n\nArray after sorted with bubble sort mechanism => ");
                Display_array(b,n);
                break;
        case 2:b = Insertion_sort(a,n);
               printf("\n\nArray after sorted with Insertion sort mechanism => ");
                Display_array(b,n);
                break;
        case 3:b = Selection_sort(a,n);
               printf("\n\nArray after sorted with Selection sort mechanism => ");
                Display_array(b,n);
                break;
        default:printf("\nUser entered wrong choice\nThank u");
               break;
    }
    printf("\nDo u want perform any operation again (Y:N) : ");
    scanf(" %c",&ch);
    }while(ch=='Y'||ch=='y');
    return 0;

}
int* Bubble_sort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
        }
    }
    return a;
}
int* Insertion_sort(int *a,int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++)
    {
        temp = *(a+i);
        j = i - 1;
        while (j >= 0 && *(a+j) > temp)
        {
            *(a+j + 1) = *(a+j);
            j = j - 1;
        }
        *(a+j + 1) = temp;
    }
    return a;
}
int* Selection_sort(int *a,int n)
{
    int i, j, min,temp;
    for (i = 0; i < n-1; i++)
    {

        min = i;
        for (j = i+1; j < n; j++)
          {
            if (*(a+j) < *(a+min))
              min = j;
          }
        temp = *(a+min);
        *(a+min)=*(a+i);
        *(a+i)=temp;
    }
    return a;
}
void Display_array(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\t%d",*(a+i));
    }printf("\n\n");
}
