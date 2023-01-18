#include<stdio.h>
int main()
{
   int n,rev=0,rem,m;
   printf("enter the number \n");
   scanf("%d",&n);
   m=n;
   while(n!=0)
   {
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
   }
   if(m==rev)
   { printf("number is pallindrome \n");
   }
   else
   {
       printf("number is not pallindrome");
   }
   return 0;
}