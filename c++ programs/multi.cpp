#include<iostream>
using namespace std;
class details
{
	protected:
		string name;
		string rollnumber;
		string branch;
};
class academics
{
	protected:
		float cGPA;
};
class grades:public details,public academics
{
	public:
		void getdata()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"enter rollnumber:";
			cin>>rollnumber;
			cout<<"Enter branch:";
			cin>>branch;
			cout<<"enter CGPA:";
			cin>>cGPA;
			display();
			{
			
			if(cGPA>=8.0)
			{
				cout<<"grade=A";
			
			}
			else if(cGPA>=7.0 && cGPA<8.0)
			{
				cout<<"grade=B";
			}
			else if(cGPA>=6.0 && cGPA<7.0)
			{
				cout<<"grade=C";
			
            }
			else
			{
				cout<<"fail";
			}
		}
	}
	void display()
	{
		cout<<"name="<<name<<endl;
		cout<<"rollnumber="<<rollnumber<<endl;
		cout<<"branch="<<branch<<endl;
		cout<<"CGPA="<<cGPA;
	}
};
main()
{
	grades o1;
	o1.getdata();
}
