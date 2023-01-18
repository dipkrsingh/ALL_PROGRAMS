#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n,s=0;
    cout<<"enter a no::"<<endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        s=s + pow(i,2);


    }
    cout<<"sum of sereis::"<<endl;
    cout<<s;


}