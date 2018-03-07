#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int N;
	int M;
	cin>>N;
	cin>>M;
	int data[100];
	int tmp[100];
	for(int i=0;i<N;i++)
	{
		cin>>data[i];
	}
	
	for(int j=0;j<N;j++)
	{
		if(j>=0 && j<M%N)
		{
			tmp[j]=data[j+N-M%N];
		}
		else
		{
			tmp[j]=data[j-M%N];
		}
	}
	
	for(int p=0;p<N-1;p++)
	{
		cout<<tmp[p]<<" ";
	}
	
	cout<<tmp[N-1];
	
	
	return 0;
}
