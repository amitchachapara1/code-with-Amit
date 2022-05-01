#include<iostream>
using namespace std;

int main()
{
	int x,y,sum,dif,pro,quot,rem;
	cout<<"Enter first number: ";
	cin>>x;
	cout<<"Enter second number: ";
	cin>>y;
	sum=x+y;
	cout<<"\nThe sum is: "<<sum;
	dif=x-y;
	cout<<"\nThe difference is: "<<dif;
	pro=x*y;
	cout<<"\nThe product is: "<<pro;
	quot=x/y;
	cout<<"\nThe quotient is: "<<quot;
	rem=x%y;
	cout<<"\nThe reminder is: "<<rem;
	
	return 0;
}
