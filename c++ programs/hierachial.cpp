#include<iostream>
using namespace std;
class data
{
	protected:
		int a,b;
	public:
			void getvalues()
			{
				cout<<"Enter a,b values:";
				cin>>a>>b;
			}
};
		
class add:public data
{
	
	public:
		void getaddition()
		{
		
			cout<<"addition of a and b is="<<a+b<<endl;
		}
};
class mul:public data
{
	
	public:
		void getmultiplication()
		{
		
			cout<<"multiplication of and b is="<<a*b;
		}
};
main()
{
 
    
	add o2;
	
	o2.getvalues();
	o2.getaddition();
  mul o3;
     o3.getvalues();
	o3.getmultiplication();
}
