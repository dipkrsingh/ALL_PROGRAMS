#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("enter the coefficients of quardratic::\n");
    scanf("%f%f%f",&a,&b,&c);
    
    while(a==0)
    {
        printf("USER ENTER WRONG CHOICE :\n");
        printf("Please renter the coefficients of quardratic::\n");
        scanf("%f%f%f",&a,&b,&c);
    }
    d=(b*b - 4*a*c);
    if(d<0)
    {
        printf("roots are imaginary::\n");
    }
    else if(d==0)
    {
        printf("roots are real n eqal::\n");
        printf("roots are : \n");
        printf("x1 = x2 = %f",-b/2*a);
    }
    else
    {   printf("roots are real and unequal\n");
        printf("Roots are :\n");       
        printf("x1= %f ",(-b+sqrt(d))/2*a);
        printf("x2= %f ",(-b-sqrt(d))/2*a);
    }return 0;
}