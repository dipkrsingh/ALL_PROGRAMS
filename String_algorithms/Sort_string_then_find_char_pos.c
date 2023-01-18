#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int printarray(int a[],int n)
{ int i;
   for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        printf("%c ",a[i]);
    }
}

int search(int arr[], int n, int x) 
{  int i;
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
           { return i+1;
           }
             return 0;
} 

int selectionsort(int a[], int n) 
{ 
    int i, j, min,temp,x,y,c;  
    for (i = 0; i < n-1; i++) 
    {  
        min=a[i];
        y=i;
        for (j = i+1; j < n; j++) 
               {
                   if (a[j]<min) 
                    {
                        min=a[j];
                        y=j; 
                    }
                }
               temp=a[i];
               a[i]=a[y];
               a[y]=temp;
    } 
    printarray(a,n);
    char s;
    printf("\nEnter the char you want to search = ");
    scanf("%c",&s);
    c=search(a,n,s);
    return c;
} 
int main()
{
    char str[100];
    int a[100],b,i;
    printf("Enter the string = ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {   

        a[i]=str[i];
    }
    printf("\nEntered string -> ");
    for(i=0;i<strlen(str);i++)
    {
      printf("%c ",a[i]);
    }
    printf("\nSorted string  -> ");
    b=selectionsort(a,strlen(str));
    if(b>=1 && b<=i)
    {printf("\nCharacter found at position = %d",b);}
    else
    {
      printf("\nCharacter not found");
    }
    
    return 0;

}
