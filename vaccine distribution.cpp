#include<iostream>
#include<stdio.h>
using namespace std;

int total_days()
{
	int n,ta=0,tb=0,a=0,b=0,d,x;
	
	cin>>n>>d;
	if(n>1000 ||d>100000 ||n<0 ||d<0)
	exit(0);
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x>100 ||x<0)
		exit(0);
		if(x>9 && x<80)
		{
			a++;
		}
		else if((x>0 && x<=9)||(x>=80 && x<=100))
		{b++;
		}
		
	}
	if(a>=d)
	ta=a%d==0?(a/d):(a/d)+1;
	if(b>=d)
	tb=b%d==0?(b/d):(b/d)+1;
	if(a<d)
	ta=1;
	if(b<d)
	tb=1;
	
	//cout<<"ta = "<<ta<<" tb= "<<tb;
	return(ta+tb);
}

main()
{
	int t;
	cin>>t;
	if(t<0 ||t>10)
	exit(0);
	while(t>0)
	{
		cout<<total_days()<<"\n";
		t--;
	}
}
