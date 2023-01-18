#include<stdio.h>
#include<math.h>
int binary_to_decimal(int n);
int Binary_To_Decimal(int n,int m);
int decimal_to_binary(int n);
int Decimal_To_Binary(int n,int m);
int main()
{
    int k,n,m;
    printf("press 1 to convert from binary to decimal\n");
    printf("press 2 to convert from binary to decimal with decimal point\n");
    printf("press 3 to convert from decimal to binary\n");
    printf("press 4 to convert from decimal to binary with decimal point\n");
    printf("enter your choice=");
    scanf("%d",&k);
    switch(k)
    {
        case 1:printf("enter binary value to convert from binary to decimal\n");
               scanf("%d",&n);
               binary_to_decimal(n);
            break;
        case 2:printf("\n\nenter binary value before decimal point=");
               scanf("%d",&n);
               printf("\nenter binary value after decimal point=");
               scanf("%d",&m);
               Binary_To_Decimal(n,m);
            break;
        case 3:printf("enter decimal value to convert from decimal to binary\n");
               scanf("%d",&n);
               decimal_to_binary(n);
            break;
        case 4:printf("\n\nenter decimal value before decimal point=");
               scanf("%d",&n);
               printf("\nenter decimal value after decimal point=");
               scanf("%d",&m);
               Decimal_To_Binary(n,m);
            break;
        default:printf("user entered wrong choice");
            break;
    }
    return 0;

}
int binary_to_decimal(int n)
{
    int c=0,s=0,m,rem;
    m=n;
    while(n!=0)
    {
        n/=10;
        c++;
    }
    for(int i=0;i<c;i++)
    {
        rem=m%10;
        s+=rem*pow(2,i);
        m/=10;
    }
    printf("result=>%d",s);
}
int Binary_To_Decimal(int n,int m)
{
    int c=0,d=0,r,rev,s=0,k,l,rem;
    float e=0;
    k=n;
    while(n!=0)
    {
        n/=10;
        c++;
    }
    for(int i=0;i<c;i++)
    {
        rem=k%10;
        s+=rem*pow(2,i);
        k/=10;
    }
    l=m;
    while(m!=0)
    {
        m/=10;
        d++;
    }
    for(int i=d;i>=1;i--)
    {
        rem=l%10;
        e+=rem*(1/(pow(2,i)));
        l/=10;
    }
    printf("Result=>%f",s+e);

}

int decimal_to_binary(int n)
{

    int c=0,s=0,m,rem;
    m=n;
    while(n!=0)
    {
        n/=2;
        c++;
    }
    int a[c];
    for(int i=0;i<c;i++)
    {
        a[i]=m%2;
        m/=2;
    }
    printf("Result=>");
    for(int i=c-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
int Decimal_To_Binary(int n,int m)
{
    int c=0,s=0,d,j;
    d=n;
    j=m;
    while(n!=0)
    {
        n/=2;
        c++;
    }
    int a[c];
    for(int i=0;i<c;i++)
    {
        a[i]=d%2;
        d/=2;
    }
    printf("Result=> ");
    for(int i=c-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf(".");
    float k,r;
    while(m!=0)
    {
        m/=10;
        s++;
    }
    k=j/pow(10,s);
    while(k)
    {
    r=k-(int)k;
    printf("%d",(int)(r*2));
    k=k*2;
    if(r==0)
        break;
    }
}

