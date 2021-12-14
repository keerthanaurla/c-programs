#include<iostream>
using namespace std;
class dist
{
	private:
		int feet;
		int inch;
	public:
		void input()
		{
			cout<<"Enter feet:";
			cin>>feet;
			cout<<"Enter inch:";
			cin>>inch;
		}
		void output()
		{
			cout<<"\nfeet ="<<feet;
			cout<<"\ninches ="<<inch;
		}
		void add(dist d1,dist d2)
		{
			feet=d1.feet+d2.feet;
			inch=d1.inch+d2.inch;
			feet=feet+(inch/12);
			inch=inch%12;
		}
		
		void add(dist *d1,dist *d2)
		{
			feet=d1->feet+d2->feet;
			inch=d1->inch+d2->inch;
			feet=feet+(inch/12);
			inch=inch%12;
		}
};
main()
{
	dist d1,d2,d3;
	d1.input();
	d2.input();
	d3.add(d1,d2);
	d3.output();
	d3.add(&d1,&d2);
	d3.output();
	
}
