#include<iostream>
using namespace std;
class studentdetails
{
	private:
		string name;
		float percentage;
	public:
		void getdetails()
		{
			cout<<"enter name:";
			cin>>name;
			cout<<"Enter percentage";
			cin>>percentage;
		}
		void display()
		{
			cout<<"Name="<<name<<endl;
			cout<<"percentage="<<percentage<<endl;
		}
};
class rollnumber
{
	private:
		studentdetails d1;
		int roll;
	public:
		void getnumber()
		{
			d1.getdetails();
			cout<<"Enter number:";
			cin>>roll;
		}
		void displaydetails()
		{
			d1.display();
			cout<<"Rollnumber="<<roll;
		}
};
main()
{
	rollnumber r1;
	r1.getnumber();
	r1.displaydetails();
}
