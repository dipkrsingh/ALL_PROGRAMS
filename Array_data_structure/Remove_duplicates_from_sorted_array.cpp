#include<bits/stdc++.h>
using namespace std;
// 8 5 8 6 6 6 8 3 5 
int main()
{
    cout<<"Enter the size of vecrtor = ";
    int n;
    cin>>n;
    vector<int> vt(n);
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>vt[i];
    }
    int p=INT_MIN,j=0;
    for(int i=0;i<n;i++)
    {
       if(vt[i]!=p)
       {
           p=vt[i];
           vt[j]=p;
           j++;
       }
    }
    cout<<"\nVector after removing elements\n";
    for(int i=0;i<j;i++)
    {
        cout<<vt[i]<<" ";
    }
    return 0;
}