#include<iostream>
using namespace std;
class values
{
	private:
		int a,b,addition;
	public:
		void readvalue()
		{
			cout<<"Enter a,b values:";
			cin>>a>>b;
		}
		void calculateaddition()
		{
			addition=a+b;
		}
		void printaddition()
		{
			cout<<addition;
		}
};
main()
{
	values v1;
	v1.readvalue();
	v1.calculateaddition();
	v1.printaddition();
}
