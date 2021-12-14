#include<iostream>
using namespace std;
class employee
{
	int id,salary;
	string name,designation;
	public:
		void read()
		{
			cout<<"\nEnter id"<<"\nEnter name:"<<"\nEnter salary:"<<"\nEnter designation:";
			cin>>id>>name>>salary>>designation;
		    cout<<"\nid:"<<id;
			cout<<"\nname:"<<name;
	    	cout<<"\nsalary:"<<salary;
	    	cout<<"\ndesignation:"<<designation;
        }
};
main()
{
	employee e1,e2;
	e1.read();
	e2.read();
}
