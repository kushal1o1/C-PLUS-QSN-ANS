#include<iostream>
using namespace std;
class sum
{
	private:
		int rel,img;
		public:
			void getdata()
			{
				cout<<"Enter the  real num and imaginary number separetely";
				cin>>rel>>img;
			}
		friend	sum operator +(sum &m1,sum &m2);
			
void show()
{
	cout<<"The sum is "<<rel<<"+i"<<img;
			}			
};
sum operator +(sum &m1,sum &m2)
{	sum m;
				m.rel=m1.rel+m2.rel;
				m.img=m1.img+m2.img;
				return m;
			}
int main()
{
	sum m1,m2,m3;
	m1.getdata();
	m2.getdata();
	m3=m1+m2;
	m3.show();
	
}
