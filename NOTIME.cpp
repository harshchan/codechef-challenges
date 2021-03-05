#include <iostream>
using namespace std;



int main() {
	// your code goes here
	
	int n,h,x,flag=0;
	int t;
	cin>>n>>h>>x;
	for(int i=0;i<n;i++)
	{
	    cin>>t;
	    if(x+t>=h)
	    flag++;
	    
	    if(flag!=0)
	    {cout<<"YES";
	        break;
	    }
	    
	}
	if(flag==0)
	{
	    cout<<"NO";
	}
	return 0;
}
