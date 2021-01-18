#include <iostream>
#include<ctype.h>
using namespace std;
int printt(int a)
{
    return(a);
}

int main() {
    int x=0;
    while(x!=42)
    {
	cin>>x;
    //cout<<x;
    if(x!=42)
    cout<<printt(x)<<endl;
    
    else
    exit(0);
}
	// your code goes here
	return 0;
}
