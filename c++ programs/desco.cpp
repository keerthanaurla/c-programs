#include<iostream>
using namespace std;
class parent
{
	public:
		parent()
		{
			cout<<"Parent class constructor is called\n";
		}
		~parent()
		{
			cout<<"Parent class destructor called\n";
		}
};
class child:public parent
{
	public:
		child()
		{
			cout<<"Child class constructor called\n";
		}
		~child()
		{
			cout<<"Child class destructor called\n";
		}
};
main()
{
	child o1;
}
