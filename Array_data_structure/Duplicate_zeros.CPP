#include<bits/stdc++.h>
using namespace std;
void Modified_array(int a[],int n)
{
    for(int i=0;i<n-1;)
    {
        if(a[i]==0)
        {
            for(int j=n-1;j>=i+2;j--)
            {
                a[j]=a[j-1];
            }
            a[i+1]=0;
            i+=2;
        }
        else
        {
            i++;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    cout<<"\nEnter the size of array = ";int n;
    cin>>n;int a[n];
    cout<<"\nEnter the array elememts \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nArray before modified \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
    cout<<"\nArray after modified\n";
    Modified_array(a,n);
    return 0;

}