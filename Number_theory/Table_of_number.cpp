#include<iostream>
using namespace std;
int main()
{
    int i=1,n,s;
    cout<<"Enter a no to find table = ";
    cin>>n;
    for(i=1; i<=10; i++)
    {
        s=n*i;
        cout<<n<<"*"<<i<<"="<<s<<endl;

    }
}
