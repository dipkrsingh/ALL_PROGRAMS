#include<stdio.h>
#include<conio.h>
int Magic_Number(int n)
{
    int sum1=0,c,d;
    c=n;
    while(c>9)
    {
        sum1=0;
        while(c!=0)
        {
            d=c%10;
            sum1+=d;
            c/=10;
        }
        c=sum1;
    }
    if(c==1)
        return 1;
    else
        return 0;
}
int main()
{
    int n,mn;
    printf("Enter number=");
    scanf("%d",&n);
    mn=Magic_Number(n);
    if(mn==1)
        printf("\nMagic Number!!!\n");
    else
        printf("\nNot Magic Number!!!\n");
    getch();
    return 0;
}
