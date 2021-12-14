#include<iostream>
using namespace std;
class Employee
{
	private:
		int Id,salary;
		string name,designation;
	public:
		void details()
		{
			cout<<"Enter name,id,des,salary";
			cin>>name>>Id>>designation>>salary;
			cout<<"name="<<name<<"Id="<<Id<<"Designation="<<designation<<"Salary="<<salary;
			
		}
};
main()
{
	Employee e1,e2;
	e1.details();
	e2.details();
}
