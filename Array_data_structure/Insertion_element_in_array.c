#include <stdio.h>
 int main()
{
   int a[100], p, i, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter  elements\n");
 
   for (i = 0; i< n;i++)
      scanf("%d", &a[i]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &p);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
   for (i= n - 1; i >= p-1; i--)
      {a[i+1] = a[i];}
 
   a[p-1] = value;
 
   printf("Resultant array is\n");
 
   for (i = 0; i <= n; i++)
      printf("%d\n", a[i]);
 
   return 0;
}
