#include <iostream>
#include <bits/stdc++.h> 
#define ll long long int
using namespace std;

ll maxfun()
{
    int n;
    ll A[100000000];
    cin>>n;
    
    
        for(int i=0;i<n;i++) 
        cin>>A[i];
        std::sort(A,A+n);
        ll max=(A[1]-A[0])+(A[n-1]-A[1])+(A[n-1]-A[0]);
        return max;
        
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   cout<< maxfun()<<endl;
	   
	}
	
	return 0;
}
