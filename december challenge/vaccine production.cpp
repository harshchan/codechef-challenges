#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
	int d1,d2,v1,v2,d=0,produced=0,i=0,total;
	//int init_vacc=0, fin_vacc=0;
	cin>>d1>>v1>>d2>>v2>>total;
	
	for(i=1; produced<total; i++)
	{
	        if(i>=d1)
			{
	            produced = produced + v1;
            }
	        if(i>=d2)
			{
                produced = produced + v2;
            }
    }
    
    cout<<i-1;
	
}
