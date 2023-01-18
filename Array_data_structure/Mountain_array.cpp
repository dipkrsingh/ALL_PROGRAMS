#include<bits/stdc++.h>
using namespace std;
bool Mountain_(int a[],int n)
{
    int m=INT_MIN,i;
    for(i=0;i<n;i++)
    {
        m=max(a[i],m);
    }
    if(m==a[0]||m==a[n-1])
    {
        return false;
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]==m)
        {
            break;
        }
        if(a[i+1]<=a[i])
        {
            return false;
        }
    }
    for(int j=i+1;j<n;j++)
    {
        if(a[j]>=a[j-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"\nEnter size of array = ";
    cin>>n;
    int a[n];
    cout<<"\nEnter elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(Mountain_(a,n))
    {
        cout<<"true\n";
    }
    else
    {
        cout<<"false\n";
    }
    return 0;
}
