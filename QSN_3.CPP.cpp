#include <iostream>
using namespace std;
class demo
{
	int num1,num2;
	public:
		swapdata(int a,int b)
		{  int x,y;
			x=a;
			y=b;
			cout<<"swapped value of a="<<y;
			cout<<"swapped value of b="<<x;
			
		}
};
int main()
{
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	demo d;
	d.swapdata(a,b);
	return 0;
}
