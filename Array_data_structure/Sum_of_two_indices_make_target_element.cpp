#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    cout<<"\nEnter array size = ";
    cin>>n;
    cout<<"\nEnter array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter target = ";
    int i,j,b,flag=0;
    cin>>b;
    for( i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==b)
            {
                flag = 1;
                cout<<"\nIndices are = ";
                cout<<i<<" , "<<j<<endl;
            }
        }
        
    }
    if(flag==0)
    {
        cout<<"\nNo indices possible";
    }    
    return 0;
    
}
