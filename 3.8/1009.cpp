#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


int main()
{
	int L1,L2;
	int i,j;
	string string1;
        getline(cin,string1);
	L1=string1.length();
	L2=L1;
	for(i=L1-1;i>=0;i--)
	{
		if(string1[i]==' ')
		{
			for(j=i+1;j<L2;j++)
			{
				cout<<string1[j];
			}
			cout<<" ";
			L2=i;
		}
		if(i==0)
		{
			for(j=0;j<L2;j++)
			{
				cout<<string1[j];
			}
		}
	}

	
	
	return 0;
}
