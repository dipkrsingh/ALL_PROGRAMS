#include<iostream>
using namespace std;
int main()
{
    int a,i=1,s=1;
    cout<<"enter a no to find factorial ::"<<endl;
    cin>>a;
    for(i=1; i<=a; i++)
    {
        s=s*i;

    }
    cout<<"factorial ::"<<endl;
    cout<<s;
    return 0;
}