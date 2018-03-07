#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int n;
int data[100]={0};

void callatz()
{
	bool flag[1000];
	for(int i=0;i<1000;i++)
	{
		flag[i]=false;
	}
	for(int i=0;i<n;i++)
	{
		if(!flag[data[i]])
		{
			int num = data[i];
			while(num!=1)
			{
				if(num%2==1)
				{
					num = (num*3+1)/2;
				}
				else
					num/=2;
				if(flag[num])
					break;
				flag[num]=true;
				
			}
		}
	}
	
	int a[100],m=0;
	for(int i=0;i<n;i++)
	{
		if(!flag[data[i]])
		{
			a[m++]=data[i];
		}
	}
	sort(a,a+m);
	for(int i=m-1;i>=0;i--)
	{
		cout<<a[i];
		if(i>0)
			cout<<" ";
	}
}



int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>data[i];
	}
	
	callatz();
	
	return 0;
}
