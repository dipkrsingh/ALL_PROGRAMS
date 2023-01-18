#include<bits/stdc++.h>
using namespace std;
void Find_min_max(int a[],int n)
{
    int Min,Max;
    Min=Max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>Max)
        {
            Max=a[i];
        }
        if(a[i]<Min)
        {
            Min=a[i];
        }
    }
    cout<<"Max and Min element from the given are  : Max = "<<Max<<" | Min = "<<Min;
}
int main()
{
    cout<<"Enter the size of array = ";int n;
    cin>>n;int a[n];
    cout<<"Enter the array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Find_min_max(a,n);
    return 0;
}