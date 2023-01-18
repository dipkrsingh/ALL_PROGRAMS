#include<stdio.h>
void Upper_Triangle(int *a,int r,int c);
void Lower_Triangle(int *a,int r,int c);
void Left_Diagonal(int *a,int r,int c);
void Right_Diagonal(int *a,int r,int c);
void Sum_of_LD_and_RD(int *a,int r,int c);
void Sum_Of_Row_and_Column(int *a,int r,int c);
void Spiral_matrix(int *a,int r,int c);
void Reverse_Spiral_form(int *a,int r,int c);
void Star_element(int *a,int r,int c);
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
    int *t;
    t=&a[0][0];
    printf("\n\n:::USER ENTERED MATIX IS SHOWN BELOW:::\n\n");
    for(int i=0;i<r;i++)
    {
        printf("\t\t");
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    printf("\nPress 1 to show upper triangular matrix\n");
    printf("\nPress 2 to show lower triangular matrix\n");
    printf("\nPress 3 to show left diagonal of matrix\n");
    printf("\nPress 4 to show right diagonal of matrix\n");
    printf("\nPress 5 to show sum of left and right diagonal of matrix\n");
    printf("\nPress 6 to show sun of rows and column of  matrix\n");
    printf("\nPress 7 to show spiral form of matrix\n");
    printf("\nPress 8 to show reverse spiral form of matrix\n");
    printf("\nPress 9 to show star element\n");
    printf("\nENTER YOUR CHOICE = ");
    scanf("%d",&l);
    switch(l)
    {

    case 1:printf("\nUPPER TRIANGULAR MATRIX SHOWN BELOW\n\n");
           Upper_Triangle(a,r,c);
           break;
    case 2:printf("\nLOWER TRIANGULAR MATRIX SHOWN BELOW\n\n");
           Lower_Triangle(t,r,c);
           break;
    case 3:printf("\nLEFT DIAGONAL OF MATRIX SHOWN BELOW\n\n");
           Left_Diagonal(t,r,c);
           break;
    case 4:printf("\nRIGHT DIAGONAL OF MATRIX SHOWN BELOW\n\n");
           Right_Diagonal(t,r,c);
           break;
    case 5:printf("\nSUM OF LEFT AND RIGHT DIAGONAL ARE SHOWN BELOW\n\n");
           Sum_of_LD_and_RD(t,r,c);
           break;
    case 6:printf("\nSUM OF ROWS AND COLUMNS ARE SHOWN BELOW\n\n");
           Sum_Of_Row_and_Column(t,r,c);
           break;
    case 7:printf("\nSPIRAL FORM OF MATRIX IS SHOWN BELOW\n\n");
           Spiral_matrix(t,r,c);
           break;
    case 8:printf("\nREVERSE SPIRAL FORM OF MATRIX IS SHOWN BELOW\n\n");
           Reverse_Spiral_form(t,r,c);
           break;
    case 9:printf("\nSTAR ELEMENT OF GIVEN MATRIX SHOWN BELOW\n\n");
           Star_element(t,r,c);
           break;
    default:printf("user entered wrong choice");
           break;}
}
void Upper_Triangle(int *a,int r,int c)
{

    for(int i=0;i<r;i++)
    {
        printf("\t\t");
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
        printf("\t\t");
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
        printf("\t\t");
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
        printf("\t\t");
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
void Spiral_matrix(int *a,int r,int c)
{
    int l,k,i,j,lr,lc;
    l=0;
    k=0;
    lr=r-1;
    lc=c-1;
    while(l<=lc && k<=lr)
    {
            for(i=l;i<=lc;i++)
                printf("%d ",*(a+k*c+i));
            k++;
            for(i=k;i<=lr;i++)
                printf("%d ",*(a+i*c+lc));
            lc--;
            if(k<=lr)
                {
                    for(i=lc;i>=l;i--)
                        printf("%d ",*(a+lr*c+i));
                    lr--;
                }
            if(l<=lc)
            {
                for(i=lr;i>=k;i--)
                    printf("%d ",*(a+i*c+l));
                l++;
            }
    }
}
void Reverse_Spiral_form(int *a,int r,int c)
{
    int i,j,l,k,lr,lc;
    l=k=0;
    lr=r-1;
    lc=c-1;
    while(k<=lr && l<=lc)
    {
            for(i=k;i<=lr;i++)
                printf("%d ",*(a+i*c+l));
            l++;
            for(i=l;i<=lc;i++)
                printf("%d ",*(a+lr*c+i));
            lr--;
            if(k<=lr)
                {
                    for(i=lr;i>=k;i--)
                        printf("%d ",*(a+i*c+lc));
                    lc--;
                }
            if(l<=lc)
            {
                for(i=lc;i>=l;i--)
                    printf("%d ",*(a+k*c+i));
                k++;
            }
    }
}
void Star_element(int *a,int r,int c)
{
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {
           if(i==r/2&&j==c/2)
            printf("%d",*(a+i*c+j));
        }
    }

}

