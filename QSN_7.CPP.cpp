#include <iostream>
using namespace std ;
class demo
{
	int num;
	static int count ;
	public:
		void getdata();
		static void showcount();
};
 int demo::count=0;
void demo::getdata()
{
	cout<<"Enter the number";
	cin>>num;
	cout<<endl;
	cout<<"The square of the num"<<num<<"is/n"<<num*num;
	cout<<endl;
	count=count+1;
}
void demo::showcount()
{
	cout<<"The program runs "<<count<<"\ntimes";
}
int main()
{
	demo d1,d2,d3;
	d1.getdata();
	d2.getdata();
	d2.getdata();
	d1.getdata();
	d1.getdata();
	d3.showcount();
}
