#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ll n,s;

cin>>n>>s;
	if(s%n==0)
	{
		cout<<(s/n)<<endl;
	}
	else
	{
		cout<<(s/n+1)<<endl;
	}
return 0;
}
