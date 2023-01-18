#include<iostream>
using namespace std;
int main()
{
    int a,b,i,c;
    cout<<"Enter two intervels = ";
    cin>>a>>b;
     cout << "Prime numbers between " << a << " and " << b << " are: ";
    while(a<b)
    {
        c=0;
        for(i=2; i<=a/2; i++)
        {
            if(a%i==0)
           {
                c=1;
                break;
           }
          

        }
         if(c==0)
         cout << a << " ";

        ++a;


    }
    return 0;
}
