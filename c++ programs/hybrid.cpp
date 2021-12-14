#include<iostream>
using namespace std;
class details
{
	protected:
		string name;
		int number;
	public:
		void getdetails()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter number:";
			cin>>number;
		}
};
class marks:public details
{
	protected:
		int intermarks;
	public:
		void getmarks()
		{
			cout<<"Enter inter marks:";
			cin>>intermarks;
		}
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"Number:"<<number<<endl;
			cout<<"Intermarks="<<intermarks<<endl;
		}
};
class emarks
{
	protected:
		int eamcetmarks;
	public:
		void getemarks()
		{
			cout<<"Enter emarks:";
			cin>>eamcetmarks;
		}
		void displaymarks()
		{
			cout<<"Eamcet marks="<<eamcetmarks<<endl;
		}
};
class finalmarks:public emarks,public marks
{
	protected:
		int total1,total2,ftotal;
	public:
		void getfinalmark()
		{
			total1=intermarks*0.25;
			total2=eamcetmarks*0.75;
			ftotal=total1+total2;
		}
		void total()
		{
			cout<<"Total="<<ftotal<<endl;
		}
};
main()
{
	finalmarks o1;
	o1.getdetails();
	o1.getmarks();
	o1.getemarks();
	o1.getfinalmark();
	o1.display();
	o1.displaymarks();
	o1.total();
}

