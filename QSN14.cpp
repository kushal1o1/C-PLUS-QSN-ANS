#include <iostream>
using namespace std;
class DB;
class DM
{
	float d_m_cm;
	public:
		void getdata()
		{
			cout<<"Enter distance in meter and centimeter";
			cin>>d_m_cm;
		}
		friend void add(DM m,DB b);
};
class DB
{
	float d_ft_i;
	public:
		void getdata()
		{
			cout<<"Enter distance in feet and inches";
			cin>>d_ft_i;
		}
		friend void add(DM m,DB b);
};
void add(DM m,DB b)
{   //1 feet =0.3048
	float ans1=m.d_m_cm+(b.d_ft_i*0.3048);

cout<<"Added distance equals "<<ans1<<"meters\t"; 
}
int main()
{
	DM m;
	DB b;
	m.getdata();
	b.getdata();
	add(m,b);
}
