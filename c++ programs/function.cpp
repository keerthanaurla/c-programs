#include<iostream>
using namespace std;
class addition
{
	private:
		int a,b,c;
	public:
		void getvalues()
		{
			cout<<"Enter a,b values:";
			cin>>a>>b;
			
		}
		void caladdition()
		{
			c=a+b;
		}
		void printaddition()
		{
			cout<<c;
		}
};
main()
{
	addition c1;
	c1.getvalues();
	c1.caladdition();
	c1.printaddition();
}
