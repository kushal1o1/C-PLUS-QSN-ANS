#include <iostream>
using namespace std;
class demo
{
	int a=10;
	int &b=a;
	public:
		void display()
		{
			cout<<"value in a="<<a<<endl;
			cout<<"value in b="<<b<<endl;
			cout<<"address of a="<<&a<<endl;
			cout<<"address of b="<<&b<<endl;
		}
};
int main()
{
	demo d1;
	d1.display();
}
