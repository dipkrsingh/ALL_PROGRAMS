#include<iostream>
using namespace std;
int main()
{
    int a[100],i,b=0,c=0,d=0,n;
    cout<<"ENTER HOW MUCH NUMBERS USER WANT TO INSERT"<<endl;
    cin>>n;
    cout<<"enter the numbers user choose to add"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
    if(a[i]<0)
    {
        b++;
    }
    else if(a[i]>0)
    {
        c++;
    }
    else
    {
        d++;
    }}
    cout<<"****************"<<endl;
    cout<<"1 . NO OF POSITIVE DIGITS"<<endl;
    cout<<"\t"<< c<<endl;
    cout<<"****************"<<endl;
    cout<<"2 . NO OF NEGATIVE DIGITS"<<endl;
    cout<<"\t"<<b<<endl;
    cout<<"****************"<<endl;
    cout<<"3 . NO OF ZEROS DIGITS"<<endl;
    cout<<"\t"<<d;
    
}