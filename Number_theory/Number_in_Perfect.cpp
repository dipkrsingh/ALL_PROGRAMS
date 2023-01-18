#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enetr the number =\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("number is perfect \n");

    }
    else
    {
        printf("number is not pefect");
    }
    return 0;
    
}
