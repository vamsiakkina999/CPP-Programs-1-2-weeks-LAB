#include<iostream>
using namespace std;
class outerclass
{   public:
	int a,b;
	outerclass()
	{
		a=10;
		b=20;
	}
	void dispouter()
	{
		cout<<"a = "<<a;
		cout<<" b = "<<b<<endl;
	}
	class innerclass
	{   public:
		int x,y;
		void dispinner()
		{
			cout<<"x = "<<x;
			cout<<" y = "<<y<<endl;
		}
	};
};
int main()
{
	outerclass ob;
	ob.dispouter();
	outerclass::innerclass obb;
	obb.dispinner();
}
