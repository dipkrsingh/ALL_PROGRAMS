#include<stdio.h>
int Krishnamurthy_number(int n);
int Perfect_number(int n);
int Armstrong_number(int n);
int Palindrome_number(int n);
int Disarium_number(int n);
int Magic_number(int n);
int Neon_number(int n);
int Automorphic_number(int n);
int Harshad_number(int n);
int main()
{
    int n,l;
    printf("::ENTER THE NUMBER U WANT TO CHECK::\n");
    scanf("%d",&n);
    printf("enter 1 to check number is krishnamurthy or not\n");
    printf("enter 2 to check number is perfect or not\n");
    printf("enter 3 to check number is Armstrong or not\n");
    printf("enter 4 to check number is Palindrome or not\n");
    printf("enter 5 to check number is Disarium or not\n");
    printf("enter 6 to check number is Magic or not\n");
    printf("enter 7 to check number is Neon or not\n");
    printf("enter 8 to check number is Automorphic or not\n");
    printf("enter 9 to check number is Harshad or not\n");


    printf("enter the choice number\n");
    scanf("%d",&l);
    switch (l)
    {
    case 1:Krishnamurthy_number(n);
        break;
    case 2:Perfect_number(n);
        break;
    case 3:Armstrong_number(n);
        break;
    case 4:Palindrome_number(n);
        break;
    case 5:Disarium_number(n);
        break;
    case 6:Magic_number(n);
        break;
    case 7:Neon_number(n);
        break; 
    case 8:Automorphic_number(n);
        break;
    case 9:Harshad_number(n);
        break;
    default:printf("user enter wrong choice\n");
        break;    
    }

    return 0;
}
int Krishnamurthy_number(int n)
{
    int i,j,rem,m,r=0,sum=1;
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
        printf("number is Krishnamurthy");
    }
    else
    { printf("number is not Krishnamurthy"); }
   
}
int Perfect_number(int n)
{
    int i,sum=0;
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
        printf("number is perfect");
        
    }
    else
    {
        printf("number is not perfect");
    }
}
int Armstrong_number(int n)
{
    int sum=0,rem,m;
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
   
}
int Palindrome_number(int n)
{
    int rev=0,rem,m;
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
}
int power_calc(int d,int p)
    {
    int pro=1,i;
    for(i=1;i<=p;i++)
        pro=pro*d;
    return pro;
    }
int Disarium_number(int n)
{
    
    int rev=0,c,d,cnt=0,dn=0,i;
    int p;
    c=n;
    while(c!=0)
    {
        d=c%10;
        cnt++;
        rev=(rev*10)+d;
        c/=10;
    }
    for(i=1;i<=cnt;i++)
        {
            if(rev!=0)
             {
                d=rev%10;
                p=power_calc(d,i);
                dn=dn+p;
                rev/=10;
            }
            else
                break;
        }
    if(dn==n)
        printf("\n%d is a Disarium Number!!!\n",n);
    else
        printf("\n%d is not a Disarium Number!!!\n",n);
}
int Magic_number(int n)
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
        printf("\nMagic Number!!!\n");
    else
        printf("\nit is not Magic Number!!!\n");
}
int Neon_number(int n)
{
    int m,s=0,rem;
    m=n*n;
    while(m!=0)
    {
        rem=m%10;
        s+=rem;
        m/=10;
    }
    if(s==n)
    {
        printf("number is neon");
    }
    else
    {
        printf("number is not neon");
    }
}
int Automorphic_number(int n)
{
    int m;
    m=n*n;
    if(n%10==m%10)
    {
        printf("number isAutomorphic");
    }
    else
    {
        printf("number is not Automorphic");
    }
}
int Harshad_number(int n)
{
    int m,rem,s=0;
    m=n;
    while(m!=0)
    {
        rem=m%10;
        s+=rem;
        m/=10;
    }
    if(n%s==0)
    {
        printf("it is Harshad number");
    }
    else
    {
        printf("it is not Harshad number");
    }

}