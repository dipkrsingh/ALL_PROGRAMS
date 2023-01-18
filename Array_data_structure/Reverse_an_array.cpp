#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void Reverse_array(int *a,int n)
{
    int p,q;
    p=0;
    q=n-1;
    for(int i=0;i<n/2;i++)
    {
        swap(a[p],a[q]);
        p++;
        q--;
    }
    
}
int main()
{
    cout<<"Enter the array size  = ";
    int n;
    cin>>n;
    int a[n];
    cout<<"\nEnter the array elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array before reversed\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    Reverse_array(a,n);
    cout<<"\nArray after reversed\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<"\n\n";
    return 0;
}
