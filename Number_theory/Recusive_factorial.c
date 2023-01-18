#include<stdio.h>
int fact(int num);
int fact(int num)
{
    if(num==0)
        return 1;
    else
        return(num*fact(num-1));
}
int main()
{
    int n;
    printf("input any number = ");
    scanf("%d",&n);
    int factorial;
    factorial=fact(n);
    printf("factorial of %d = %d",n,factorial);
    return 0;

}
