#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;	
};

class B:virtual public A
{
	protected:
		int c,d;	
};

class C:virtual public A
{
	protected:
		int e,f;	
};

class D:public B,public C
{
	protected:
		int sum,sub,mul;
	public:
	    void getdata()
		{
			cout<<"Enter values:";
			cin>>a>>b>>c>>d>>e>>f;
		
		}
		void operation()
		{
			sum=a+b;
			sub=c-d;
			mul=e*f;
		}
		void display()
		{
			cout<<"Sum="<<sum<<endl;
			cout<<"Su btraction="<<sub<<endl;
			cout<<"Muh="<<mul;
		}	
};
main()
{
	D o1;
	o1.getdata();
	o1.operation();
	o1.display();
}
