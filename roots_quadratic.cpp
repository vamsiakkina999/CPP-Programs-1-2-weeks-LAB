#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter coefficients a,b and c : ";
	cin>>a>>b>>c;
	float discriminant = b*b-4*a*c;
	float root1,root2;
	if(a==0)
	{
		cout<<"This is not a quadratic equation (a cannot be 0)."<<endl;
	}
	else if(discriminant>0)
	{
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		cout<<"Roots are real and distinct."<<endl;
		cout<<"Root 1 = "<<root1<<endl;
		cout<<"Root 2 = "<<root2<<endl;
	}
	else if(discriminant==0)
	{
		root1=root2=-b/(2*a);
		cout<<"Roots are real and equal."<<endl;
		cout<<"Root = "<<root1<<endl;
	}
	else{
		float realpart=-b/(2*a);
		float imagpart=sqrt(-discriminant)/(2*a);
		cout<<"Roots are complex and imaginary."<<endl;
		cout<<"Root1 = "<<realpart<<"+"<<imagpart<<"i"<<endl;
		cout<<"Root2 = "<<realpart<<"-"<<imagpart<<"i"<<endl;	
	}
	return 0;
}
