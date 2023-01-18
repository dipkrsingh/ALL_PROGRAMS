#include<iostream>
using namespace std;
// 7 5 6 2 8 9 3 1
int Binary_search(int a[],int n,int b)
{

}
int main()
{
    cout<<"\nEnter the array size = ";
    int n;
    cin>>n;
    int a[n];
    cout<<"\nEnter elements :\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nPostion ->";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<i+1;
    }cout<<endl<<"\t";
    for(int i=0;i<n;i++)
    {
        cout<<"\t-";
    }cout<<"\nValues  ->";
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<"\nEnter the value you want to search = ";
    int b;
    cin>>b;
    int x = Binary_search(a,n,b);
      if(x!=-1)
      {
          cout<<"Element not found";
      }
      else
      {
          cout<<"Element found at position "<<x+1;
      }
    return 0;
}
