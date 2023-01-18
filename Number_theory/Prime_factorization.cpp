// C++ program to print all prime factors 
#include <bits/stdc++.h> 
using namespace std; 

// A function to print all prime 
// factors of a given number n 
void primeFactors(int n) 
{ 
	// Print the number of 2s that divide n 
    int po=n;
    map<int,int> ml;

	while (n % 2 == 0) 
	{ 
		ml[2]++;
		n = n/2; 
	} 

	// n must be odd at this point. So we can skip 
	// one element (Note i = i +2) 
	for (int i = 3; i <= sqrt(n); i = i + 2) 
	{ 
		// While i divides n, print i and divide n 
		while (n % i == 0) 
		{ 
			ml[i]++;
			n = n/i; 
		} 
	} 

	// This condition is to handle the case when n 
	// is a prime number greater than 2 
	if (n > 2) 
		{ml[n]++;}
        pair<int,int> pi;
        int mk=INT_MIN,p;
        for(auto x:ml)
        {
            if(x.second>=mk)
            {
                pi = make_pair(x.first,x.second);
                mk=x.second;

            }
        }
        long long int s=1;
        for(int i=1;i<pi.second;i++)
        {
            cout<<pi.first<<" ";
            s*=pi.first;
        }
        cout<<po/s;
} 

/* Driver code */
int main() 
{ 
	int n;
    cout<<"Enter the value of n = ";cin>>n;
	primeFactors(n); 
	return 0; 
} 

// This is code is contributed by rathbhupendra 
