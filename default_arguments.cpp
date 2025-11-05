#include<iostream>
using namespace std;
void greet(string  name="Guest",int times=1)
{
	for(int i=0;i<times;i++)
	{
		cout<<"Hello, "<<name<<"1"<<endl;
	}
}
int main()
{
	greet();
	greet("Anil");
	greet("Ravi",3);
	return 0;
}
