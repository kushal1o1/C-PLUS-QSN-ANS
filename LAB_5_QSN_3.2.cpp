#include<iostream>
using namespace std;
class sub
{
	private:
		int rel,img;
		public:
			void getdata()
			{
				cout<<"Enter the  real num and imaginary number separetely";
				cin>>rel>>img;
			}
		friend	sub operator -(sub &m1,sub &m2);
			
void show()
{
	cout<<"The difference is "<<rel<<"+i"<<"("<<img<<")";
			}			
};

sub operator -(sub &m1,sub &m2){	sub m;
				m.rel=m1.rel-m2.rel;
				m.img=m1.img-m2.img;
				return m;
			}
int main()
{
	sub m1,m2,m3;
	m1.getdata();
	m2.getdata();
	m3=m1-m2;
	m3.show();
	
}
