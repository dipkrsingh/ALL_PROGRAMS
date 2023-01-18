#include<bits/stdc++.h>
using namespace std;
vector<int> Sum_of_target(int a[],int n)
{
    cout<<"\nEnter the reqired target = ";int t;cin>>t;
    sort(a,a+n);
    int i,j;
    i=0;j=n-1;
    vector<int> vt;
    while(j-i!=1)
    {
        if(a[i]+a[j]==t)
        {
            vt.push_back(i);
            vt.push_back(j);
            vt.push_back(t);
            i++;
        }
        else if(a[i]+a[j]>t)
        {
            j--;
        }
        else
        {
            i++;
        }

    }
    if(a[i]+a[j]==t)
    {
        vt.push_back(i);
        vt.push_back(j);
        vt.push_back(t);
    }
    return vt;
}
int main()
{
    cout<<"\nEnter the array size = ";int n;
    cin>>n;int a[n];
    cout<<"\nEnter array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> vt = Sum_of_target(a,n);
    cout<<"\nINDICES   |  TARGET\n";
    for(int i=0;i<vt.size();i+=3)
    {
        
        cout<<vt[i]<<" + "<<vt[i+1]<<"     => "<<vt[i+2]<<endl;
    }
    return 0;
}
