#include<stdio.h>
void Hollowdiamond();
void Heart();
void Diamond();
void Cross();
void Arrow();
void Envelope();
void square();
void k();
void Hollowtriangle();
void Hollowsquare();
int main()
{ int n;
Hollowdiamond();
Heart();
Diamond();
Cross();
Arrow();
Envelope();
square();
k();
Hollowtriangle();
Hollowsquare();
printf("enter the pattern number u want to display = ");
scanf("%d",&n);
if(n==1)
{ Hollowdiamond();}
else if(n==2)
{ Heart();}
else if(n==3)
{ Diamond();}
else if(n==4)
{ Cross();}
else if(n==5)
{ Arrow();}
else if(n==6)
{ Envelope();}
else if(n==7)
{ square();}
else if(n==8)
{ k();}
else if(n==9)
{ Hollowtriangle();}
else if(n==10)
{ Hollowsquare();}
else
{
    printf("user enterd wrong choice");
}

return 0;
}
void Hollowdiamond()
{
    int i,j;
    printf("1:\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
            {
                if(j==5-i||j==3+i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
    for(i=1;i<=3;i++)
    {

        for(j=1;j<=7;j++)
            {
                if(j==i+1||j==8-i-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
}

void Heart()
{
    int i,j;
    printf("2:\n");
for(i=1;i<=9;i++)
{
    for(j=1;j<=11;j++)
    {
        if(i<=3){
        if((j>=4-i&&j<=2+i)||(j>=10-i&&j<=8+i))
            printf("*");
        else
            printf(" ");}
        else
            {
            if(j>=i-3&&j<=15-i)
                printf("*");
            else
                printf(" ");
            }
    }
    printf("\n");
}
}
void Diamond()
{
    int i,j;
    printf("3:\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
            {
                if(j>=5-i&&j<=3+i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
    for(i=1;i<=3;i++)
    {

        for(j=1;j<=7;j++)
            {
                if(j>=i+1&&j<=8-i-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
}
void Cross()
{
    int i,j;
    printf("4:\n");
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {

        for(j=1;j<=7;j++)
        {
            if(j>=4-i && j<=4+i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void Arrow()
{
    int i,j;
    printf("5:\n");
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i+(i-1)&&j<=4+i)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i+(i+1)&&j<=5+i)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
}
void Envelope()
{
    int i,j;
    printf("6:\n");
    for(i=1;i<=4;i++)
    {

        for(j=1;j<=7;j++)
            {
                if(j==i||j==8-i||i==1||j==1||j==7)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=7;j++)
            {
                if(j==4-i||j==4+i||i==3||j==1||j==7)
                    printf("*");
                else
                    printf(" ");

            }
            printf("\n");
    }
}
void square()
{
     int i,j,k,l;
     printf("7:\n");
    for(i=4;i>=1;i--)
    {  k=i+(4-i);
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",i);
            }
            else if(j<5-i)
            {
                printf("%d",k--);
            
            }
            else
            {
                printf("%d",++k);
            }
            

        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        l=i+(4-i);
        for(j=1;j<=7;j++)
        {
            if(j>=4-i && j<=4+i)
            {
                printf("%d",i+1);
            }
            else if(j<4-i)
            {
                printf("%d",l--);
            }
            else
            {
                printf("%d",++l);
            }
            
        }
        printf("\n");
    }
}
void k()
{
    int i,j;
    printf("8;\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=1&&j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=1&&j<=i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void Hollowtriangle()
{
    int i,j;
    printf("9:\n");
for(i=1;i<=4;i++)
{
    for(j=1;j<=7;j++)
    {
        if(j==5-i||j==3+i||(i==4 && j%2!=0))
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}
}
void Hollowsquare()
{
    int i,j;
    printf("10:\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
            {
                if(j<=5-i||j>=3+i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
    for(i=1;i<=3;i++)
    {

        for(j=1;j<=7;j++)
            {
                if(j<=i+1||j>=8-i-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
}
