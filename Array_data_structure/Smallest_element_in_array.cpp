#include<stdio.h>
int main()
{
    int a[5],i,l;
    printf("enter the five numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]<l)
        {
            l=a[i];
        }

    }
    printf("lowest among five numbers is = %d",l);
    return 0;
}