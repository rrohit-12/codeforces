#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int sum=a;
		while(a>=b)
		{
			int n=a/b;
			sum=sum+n;
			a=n +(a%b);
		}
	cout<<sum<<endl;

}
