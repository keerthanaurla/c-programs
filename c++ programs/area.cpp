#include<iostream>
using namespace std;
class area
{
	private:
		int l,b,area;
	public:
		void printarea()
	{
		cout<<"Enter l,b values:";
		cin>>l>>b;
		area=l*b;
		cout<<"area of rectangle is="<<area;
	}
};
main()
{
	area a1,a2,a3;
	a1.printarea();
	a2.printarea();
	a3.printarea();
}
