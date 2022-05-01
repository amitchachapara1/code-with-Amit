#include<iostream>
using namespace std;

int main()
{
	int no,i,flag=0;
	cout<<"Enter the number to check prime or not";
	cin>>no;
	for(i=2;i<=no;i++)
	{
		if (no%i==0)
		{
			flag++;
			break;
		}
	}
	if (flag==0)
	cout<<"The number is  prime";
	else
	cout<<"The number is not prime";
	cout<<endl;
	return 0;
}
