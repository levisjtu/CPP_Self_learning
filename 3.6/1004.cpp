#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


int main()
{
	int n;
	int flag1=0,flag2=0;
	int max,min;
	cin>>n;
	string name[n];
	string stu_num[n];
	int grade[n];
	for(int i=0;i<n;i++)
	{
		cin>>name[i];
		cin>>stu_num[i];
		cin>>grade[i];
	}
	max = min = grade[0];
	for(int j=1;j<n;j++)
	{
		if(grade[j]>max)
		{
			max=grade[j];
			flag1=j;
		}
	}
	
 	for(int k=1;k<n;k++)
	{
		if(grade[k]<min)
		{
			min=grade[k];
			flag2=k;
		}
	}
	
	
	cout<<name[flag1]<<" "<<stu_num[flag1]<<endl;
	cout<<name[flag2]<<" "<<stu_num[flag2]<<endl;
	
	
	
	return 0;
}
