#include<stdio.h>
int main()
{
   int n,sum=0,rem,m;
   printf("enter the number \n");
   scanf("%d",&n);
   m=n;
   while(n!=0)
   {
       rem=n%10;
       sum+=rem*rem*rem;
       n=n/10;
   }
   if(m==sum)
   { printf("number is armstrong \n");
   }
   else
   {
       printf("number is not armstrong");
   }
   return 0;
}