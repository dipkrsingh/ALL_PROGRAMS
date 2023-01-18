#include<iostream>
using namespace std;
int main()
{
    int n,d,s=0;
    cout<<"Enter a no = ";
    cin>>n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        s=s+d;
    }
    cout<<"Sum os its digits ="<<s;
}
