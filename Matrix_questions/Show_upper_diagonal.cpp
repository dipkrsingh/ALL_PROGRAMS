#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c,m,n,a[100][100],b[100][100],s[100][100];
    cout<<"enter the rows and colum of matrix:"<<endl;
    cin>>r>>c;
    while(r!=c)
    {
        cout<<"Error please put correct dimensions:"<<endl;
        cout<<endl;
        cout<<"enter right rows and colum of matrix"<<endl;
        cin>>r>>c;
    }
    cout<<"enter the elements of matrix;'"<<endl;
    for(i=0; i<r; i++)
     for(j=0; j<c; j++)
     {
         cout<<"enter element a"<<i+1<<j+1<<endl;
         cin>>a[i][j];
     }
     cout<<"upper diagonal you want is shown below:"<<endl;
     cout<<endl;
     
         for(i=0; i<r; i++)
        { for(j=0; j<c; j++)
         {   
             if(i+j<r)
             {
             cout<<a[i][j]<<"  ";
             }
         }
         cout<<endl;}
     
}