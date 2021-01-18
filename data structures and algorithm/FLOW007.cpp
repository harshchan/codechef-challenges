#include <iostream>
using namespace std;

int reverse(int a)
{
    int rev=0,rem=0;
    while(a>0)
    {   rem=a%10;
        rev=(rev*10)+rem;
        a=a/10;
    }
    return rev;
}

int main() {
    
	// your code goes here
	int x,t;
	cin>>t;
	while(t>0)
	{
	    cin>>x;
	    cout<<reverse(x)<<endl;
	    t--;
	}
	
	return 0;
}
