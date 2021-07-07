#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
	if(a == 0)
		return b;
	else
		return gcd(b%a,a); 
	
}

int main()
{
	cout<<"Enter two elements"<<endl;
	int a,b;
	cin>>a>>b;
	int v=gcd(a,b);
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<v<<endl;
}