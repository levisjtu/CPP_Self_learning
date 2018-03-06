#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;


int main()
{
	//int MAX_LENGTH=100;
	int n;
	cin>>n;
	string store;
	for(int i=0;i<n;i++)
	{
		cin>>store;
		if(store.length()<3)
			cout<<"NO"<<endl;
	else
	{
		int p,t;//the number of A before P is p, the number of A before T is t.
		int A_Count=0;
		int P_Count=0;
		int T_Count=0;
		for(int j=0;j<store.length();j++)
		{
			if(store[j]=='A')
			{
				A_Count++;
			}
			else if(store[j]=='P')
			{
				p=A_Count;
				P_Count++;
			}
			else if(store[j]=='T')
			{
				t=A_Count;
				T_Count++;
			}
			else
				break;
		}
		if(P_Count==1 && T_Count==1 && p*(t-p)==(A_Count-t))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
	}	
	return 0;
}
