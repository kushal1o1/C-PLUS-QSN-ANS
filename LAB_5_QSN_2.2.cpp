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
		friend	multiply operator *(multiply &m1,multiply &m2);
		
void show()
{
	cout<<"The multiplication is "<<num1;
			}			
};
multiply operator *(multiply &m1,multiply &m2)
			{	multiply m;
				m.num1=m1.num1*m2.num1;
				return m;
			}
int main()
{
	multiply m1,m2,m3;
	m1.getdata();
	m2.getdata();
	m3=m1*m2;
	m3.show();
	
}
