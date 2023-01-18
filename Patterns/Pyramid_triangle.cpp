#include<iostream>
using namespace std;
int main()
{
   int n,i,j;
   cout<<"Enter the number of rows = ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
     for(int k=1;k<3;k++)
     {
        for(j=1;j<=2*n;j++)
        {
           if(j>=n+1-i&&j<=n+i)
              cout<<"*";
           else
           {
            cout<<" ";
           }
        }cout<<"\n";
     }
   }

}

