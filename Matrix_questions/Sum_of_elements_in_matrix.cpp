#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter number of row = ";
	cin>>r;
	cout<<"Enter number of colum = ";
	cin>>c;
	int a[r][c];
	cout<<"Enter the elements in matrix \n";
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>a[i][j];		
		}
	}
	cout<<"Given matrix ids as follow\n";
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<a[i][j]<<" ";		
		}cout<<"\n";
	}
	cout<<"\nSum of elements in matrix is  = ";
	int s=0;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			s+=a[i][j];		}
	}
	cout<<s;
	return 0;
}
