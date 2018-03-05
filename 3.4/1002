#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

/* string result[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int sum(unsigned long long i)
{
	if(i>9)
		return i%10 + sum(i/10);
	else
		return i;
}

void print(int num)
{
	if(num>9)
		print(num/10);
	cout<<result[num%10]<<"\t";
}

int main()
{
	unsigned long long n;
	int m;
	int p;
	cin>>n;
	m=sum(n);
	cout<<m<<endl;
	p=m/10;
	print(p);
    cout<<result[m%10]<<endl;
	
	return 0;
} */

string result[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
void print(int number)
{
	if(number>9)
		print(number/10);
	cout<<result[number%10]<<" ";
}

int main()
{
	int p;
	int m;
	int count;
	int sum = 0;
	string num;
	cin>>num;
	count=num.size();
	for(int i=0;i<count;i++)
	{
		sum+=(num[i]-'0');
	}
	m=sum;
	if(m<10)
	{
		cout<<result[m]<<endl;
	}
	else
	{
	    p=m/10;
	    print(p);
        cout<<result[m%10]<<endl;
	}
	
	return 0;
}
