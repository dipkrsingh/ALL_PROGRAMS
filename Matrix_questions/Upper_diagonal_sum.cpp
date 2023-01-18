#include<iostream>
using namespace std;
int main()
{
    int  i,j,a[3][3],s=0;
    cout<<"enter the 3*3 matrix valuues"<<endl;
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            cin>>a[i][j];

        }
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            if(i<=j)
           {
                s=s+a[i][j];
                }
        }
    }
    cout<<"sum of upper diagonal::"<<endl<<s;

}