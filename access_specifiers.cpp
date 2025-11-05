#include<iostream>
using namespace std;
class ClassA
{
	private:
		int sno;
    public:
    	int pincode;
    protected:
    	int mobno;
};
class ClassB:public ClassA
{
	public:
		void disp()
		{
			cout<<"Pincode "<<pincode;
		}
};
int main()
{
	ClassA ob;
	ob.pincode=123;
	cout<<ob.pincode;
	ClassB obb;
	obb.disp();
	return 0;
}
