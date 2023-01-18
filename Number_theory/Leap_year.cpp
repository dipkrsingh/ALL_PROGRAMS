#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year to be cheak";
    cin>>year;
    if(year%4==0)
    cout<<"it is leap year";
    else
    cout<<"this is not leap year";
    return 0;
}