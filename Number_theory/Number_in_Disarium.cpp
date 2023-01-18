#include<stdio.h>
#include<math.h>
int main()
{
   int n,sum=0,rem,i=0,h,m;
   printf("enter the number \n");
   scanf("%d",&n);
   m=n;
   h=n;
   while(n!=0)
   {
       n=n/10;
     i++;

   }
   printf("value of i =%d",i);
   while(m!=0)
   {
       rem=m%10;
       sum+=pow(rem,i);
       m=m/10;
       i--;

   }
   printf("sum=%d",sum);
   if(h==sum)
   { printf("number is disarium \n");
   }
   else
   {
       printf("number is not disarium");
   }
   return 0;
}
