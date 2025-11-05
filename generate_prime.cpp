#include<iostream>
using namespace std;
int main()
{
	int a,b,f=0,i,j,c=0;
	cout<<"Program for generating prime numbers within range of two numbers"<<endl;
	cout<<"Enter a and b : ";
	cin>>a>>b;
	for(i=a;i<=b;i++)
	{
		if(i<2)
		{
			continue;
		}
		f=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<i<<" ";
		}
		}
}
