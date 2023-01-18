#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"enter a no";
    cin>>a;
    i=1;
    while(i<=a)
    {
        if(i%2==1)
        cout<<i<<endl;
        ++i;
    }

}