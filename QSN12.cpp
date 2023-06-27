#include <iostream>
using namespace std;
class GCES;
class PEC
{
	private:
		int no_of_student;
		public:
			void getvalue()
			{
				cout<<"Enter the number of students in PEC \n";
				cin>>no_of_student;
			}
			friend void compare(GCES g,PEC p);
			
};
class GCES
{
	private:
		int no_of_student;
		public:
			void getvalue()
			{
				cout<<"Enter the number of students in GCES\n";
				cin>>no_of_student;
			}
			friend void compare(GCES g,PEC p);
};
void compare(GCES g,PEC p)
{
		cout<<"GCES student="<<g.no_of_student<<"\n";
	cout<<"PEC student="<<p.no_of_student<<"\n";
	if(g.no_of_student>p.no_of_student)

	cout<<"The number of GCES is greater than PEC";
	else
	cout<<"The number of PEC is greater than GCES";
}
int main()
{
	GCES g;
	PEC p;
	g.getvalue();
	p.getvalue();
	compare(g,p);
	
}
