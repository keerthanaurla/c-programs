#include<iostream>
using namespace std;
class dist
{
	private:
		int feet;
		int inch;
	public:
		dist()
		{
			
		}
		dist(int f1,int i1)
		{
			feet=f1;
			inch=i1;
		}
		void add(dist d3,dist d4)
		{
			feet=d3.feet+d4.feet;
			inch=d3.inch+d4.inch;
			feet=feet+(inch/12);
			inch=inch%12;
		}
		void output()
		{
			cout<<"\nFeet="<<feet;
			cout<<"\ninch="<<inch;
		}
		~dist()
		{
			cout<<"\nDestructor called";
		}
};
main()
{
	int f1,i1,f2,i2;
	cout<<"\nenter values:";
	cin>>f1>>i1>>f2>>i2;
	dist d1(f1,i1);
	dist d2(f2,i2);
	dist d3;
	d3.add(d1,d2);
	d3.output();
}
