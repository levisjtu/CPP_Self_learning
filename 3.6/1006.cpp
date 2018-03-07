#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n>=1 && n<10)
	{
		cout<<1<<n;
	}
	if(n>=10 && n<100)
	{
		int n1,n2;
		n1=n/10;
		n2=n%10;
		for(int i=0;i<n1;i++)
		{
			cout<<'S';
		}
		cout<<1<<n;
	}
	if(n>=100 && n<1000)
	{
		int n3,n4,n5;
		n3=n/100;
		n4=(n/10)%10;
		n5=n%10;
		for(int k=0;k<n3;k++)
		{
			cout<<'B';
		}
		for(int m=0;m<n4;m++)
		{
			cout<<'S';
		}
		cout<<1<<n;
	}
	
	return 0;
}
