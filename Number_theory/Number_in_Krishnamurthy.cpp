#include<stdio.h>
int main()
{
    int n,i,j,rem,m,r=0,sum=1;
    printf("eneter the number =\n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
   {
       rem=n%10;
       for(i=1;i<=rem;i++)
      { sum=sum*i;}
      r+=sum;
       sum=1;
       n=n/10;
   }
    if(r==m)
    {
    printf("number is krishnamurthy ");}
    else
    printf("number is not krishnamurthy");
   return 0;
}
