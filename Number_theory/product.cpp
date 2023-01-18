#include<iostream>
using namespace std;
int Product_(int a,int b)
{
    if(b<1)
    {
        return 0;
    }
    int temp=Product_(a,b-1);
    temp+=a;
    return temp;
}
int main()
{
    cout<<"Enter two number  = ";int a,b;
    /*
    ftyjjjhvummokm

      oo
    */
    cin>>a>>b;
    int result=Product_(a,b);
    cout<<"Product of the given two number = "<<result<<"\n\n";
    return 0;
}