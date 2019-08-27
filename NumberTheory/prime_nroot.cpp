#include<iostream>
using namespace std;

int checkPrime(int n)
{
	bool f = 0;
	if(n==1)
	{
		return 0;
		}	
	for(int i = 3;i*i<=n;i+=2)
	{
		if(n%i == 0)
		{
			f =1 ;
			break;
		}
	}
	return (f == 1)? 1:0;
}
int main()
{
	int n;
	cin>>n;
	bool k = checkPrime(n);
	if(k==1)
	{
		cout<<"NOn-Prime"<<endl;
	}
	else{
		cout<<"Prime"<<endl;
	}
}
