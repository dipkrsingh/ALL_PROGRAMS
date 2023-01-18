#include<iostream>
using namespace std;
void bubble_sort(int *a,int n)
{
    if(n==1)
    {
        return ;
    }
    for (int i=0; i<n-1; i++)
        if (a[i] > a[i+1])
            swap(a[i], a[i+1]);
    bubble_sort(a, n-1);

}
int main()
{
    cout<<"Enter the array size = ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    cout<<"Sorted array =>\t";
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<"\t";
    }
    return 0;
}
