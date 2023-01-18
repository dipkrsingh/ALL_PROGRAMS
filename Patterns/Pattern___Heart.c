#include<stdio.h>
int main()
{
int n,i,j;
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
return 0;
}
