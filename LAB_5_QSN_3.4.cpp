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
		 sub operator +(sub &m)
			{
				m.rel=rel+m.rel;
				m.img=img+m.img;
				return m;
			}
void show()
{
	cout<<"The sum is "<<rel<<"+i"<<"("<<img<<")";
			}			
};
int main()
{
	sub m1,m2,m3;
	m1.getdata();
	m2.getdata();
	m3=m1+m2;
	m3.show();
	
}
