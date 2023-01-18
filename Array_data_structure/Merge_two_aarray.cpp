#include<iostream>
using namespace std;
void merge(int a[],int b[],int n,int m)
{
    cout<<"Array before sorting = \n";
    cout<<"a[] = ";
    for(int i=0;i<n;i++)
    { 
        cout<<a[i]<<" ";
    }
    cout<<"\nb[] = ";
    for(int j=0;j<m;j++)
    {
        cout<<b[j]<<" ";
    }
 
    
    int temp,temp1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[0])
        {
            temp=a[i];
            a[i]=b[0];
            b[0]=temp;
            for(int j=0;j<m-1;j++)
            {
                if(b[j]>b[j+1])
                {
                    temp1=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp1;
                }
            }
            
           
        }
         
    }
    cout<<"\nArray after sorting =\n";
    cout<<"a[] = ";
    for(int i=0;i<n;i++)
    { 
        cout<<a[i]<<" ";
    }
    cout<<"\nb[] = ";
    for(int j=0;j<m;j++)
    {
        cout<<b[j]<<" ";
    }
    cout<<"\n\n";
}
int main()
{
    int a[20],b[20],n,m,i;
    cout<<"Enter size of 1st array = ";
    cin>>n;
    cout<<"Enter size of 2nd array = ";
    cin>>m;
    cout<<"Enter 1st array (must be sorted) = ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter 2nd array (must be sorted) = ";
    for(int i=0;i<m;i++)
        cin>>b[i];
    merge(a,b,n,m);
    return 0;
}
