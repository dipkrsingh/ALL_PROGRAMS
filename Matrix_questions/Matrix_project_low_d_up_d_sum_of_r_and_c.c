#include<stdio.h>
void Upper_Triangle(int *a,int r,int c);
void Lower_Triangle(int *a,int r,int c);
void Left_Diagonal(int *a,int r,int c);
void Right_Diagonal(int *a,int r,int c);
void Sum_of_LD_and_RD(int *a,int r,int c);
void Sum_Of_Row_and_Column(int *a,int r,int c);
int main()
{
    int r,c,l;
    printf("enter the number of row=");
    scanf("%d",&r);
    printf("enter the number of column=");
    scanf("%d",&c);
    int a[r][c];
    printf("enter matrix element\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n:::USER ENTERED MATIX IS SHOWN BELOW:::\n\n");
    for(int i=0;i<r;i++)
    {
        printf("\t\t");
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    printf("Press 1 to show upper triangular matrix\n");
    printf("Press 2 to show lower triangular matrix\n");
    printf("Press 3 to show left diagonal of matrix\n");
    printf("Press 4 to show right diagonal of matrix\n");
    printf("Press 5 to show sum of left and right diagonal of matrix\n");
    printf("Press 6 to show sum of rows and column of  matrix\n");
    printf("\nENTER YOUR CHOICE\ = ");
    scanf("%d",&l);
    switch(l)
    {

    case 1:printf("\nUPPER TRIANGULAR MATRIX SHOWN BELOW\n");
           Upper_Triangle(a,r,c);
           break;
    case 2:printf("\nLOWER TRIANGULAR MATRIX SHOWN BELOW\n");
           Lower_Triangle(a,r,c);
           break;
    case 3:printf("\nLEFT DIAGONAL OF MATRIX SHOWN BELOW\n");
           Left_Diagonal(a,r,c);
           break;
    case 4:printf("\nRIGHT DIAGONAL OF MATRIX SHOWN BELOW\n");
           Right_Diagonal(a,r,c);
           break;
    case 5:printf("SUM OF LEFT AND RIGHT DIAGONAL ARE SHOWN BELOW\n");
           Sum_of_LD_and_RD(a,r,c);
           break;
    case 6:printf("SUM OF ROWS AND COLUMNS ARE SHOWN BELOW\n");
           Sum_Of_Row_and_Column(a,r,c);
           break;
    default:printf("user entered wrong choice");
           break;}
}
void Upper_Triangle(int *a,int r,int c)
{

    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
           if(j>=i && j<c)
           {
           printf("%d ",*(a+i*c+j));}
           else
            printf("  ");
        }printf("\n");
    }
}
void Lower_Triangle(int *a,int r,int c)
{

    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
           if(j<=i)
           {
           printf("%d ",*(a+i*c+j));}
        }printf("\n");
    }
}
void Left_Diagonal(int *a,int r,int c)
{

    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
           if(j==i)
           {
           printf("%d ",*(a+i*c+j));}
           else
            printf("  ");
        }printf("\n");
    }
}
void Right_Diagonal(int *a,int r,int c)
{

    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
           if(j+i==r-1)
           {
           printf("%d ",*(a+i*c+j));}
           else
            printf("  ");
        }printf("\n");
    }
}
void Sum_of_LD_and_RD(int *a,int r,int c)
{
    int s=0,k=0;
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
           if(j==i)
           s=s+(*(a+i*c+j));
           if(j+i==r-1)
           k=k+(*(a+i*c+j));
        }
    }
    printf("sum of left diagonal = %d\n",s);
    printf("sum of right diagonal = %d\n",k);
}
void Sum_Of_Row_and_Column(int *a,int r,int c)
{
    int s=0,k=0;
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
           s=s+(*(a+i*c+j));
           k=k+(*(a+j*c+i));
        }
        printf("Sum of %d st row =%d && ",i+1,s);
        printf("and %d st column =%d\n",i+1,k);
        s=0;
        k=0;
    }

}
