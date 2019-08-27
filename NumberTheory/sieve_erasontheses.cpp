#include<iostream>
using namespace std;
// complexity of O(nloglogn) which is n
//otherwise the complexity would be n^2 or nsqrt(n)
bool checkPrime(int n)
{
	int p[1001];
	for(int i = 2;i<=1000;i++) p[i] = 1;
	
	for(int i =2;i<=1000;i++)
	{
		if(p[i])
		{
			for(int j = i*i;j<=1000;j+=i)
			{
				p[j] = 0;
			}
		}
	}
	p[0] = 0;
	p[1] = 0;
	
	
	return p[n];
}


int main()
{
	int n;
	cin>>n;
	
	cout<<checkPrime(n);
}
