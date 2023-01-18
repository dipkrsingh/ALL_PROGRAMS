#include<bits/stdc++.h>
using namespace std;
void Pascals_triangle(int n,int m,int j,int i)
{
    if(i==m)
    {
        return ;
    }
    n=n-1;
    int p=m-1;
    cout<<j<<" ";
    j=j*(p-i)/(i+1);
    i++;
    Pascals_triangle(n,m,j,i);
    return ;
}
int main()
{
    int n,j=1,i=0;
    cout<<"\nEnter the row number = ";
    cin>>n;
    Pascals_triangle(n,n,j,i);
    return 0;
}