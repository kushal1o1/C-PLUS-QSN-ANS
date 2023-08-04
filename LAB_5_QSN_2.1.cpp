#include<iostream>
using namespace std;
class multiply
{
	private:
		int num1;
		public:
			void getdata()
			{
				cout<<"Enter the number";
				cin>>num1;
			}
			multiply operator *(multiply &d)
			{
				d.num1=num1*d.num1;
				return d;
			}
void show()
{
	cout<<"The multiplication is "<<num1;
			}			
};
int main()
{
	multiply m1,m2,m3;
	m1.getdata();
	m2.getdata();
	m3=m1*m2;
	m3.show();
	
}
