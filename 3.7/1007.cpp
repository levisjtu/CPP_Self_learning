#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int prime(int num)
{
	int upper=sqrt(num);

	for(int i=2;i<=upper;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	    return 1;
}
int main()
{
	int N;
	int cnt=0;
	cin>>N;
	for(int i=3;i<=N-2;i++)
	{
		if(prime(i)==1 && prime(i+2)==1)
		{
			cnt++;
		}
	}
	
	cout<<cnt<<endl;
	
	return 0;
}
