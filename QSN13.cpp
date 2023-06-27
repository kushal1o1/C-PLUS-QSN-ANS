#include <iostream>
using namespace std;
class time
{
	int hours,minutes,seconds;
	public:
		 void getdata();
		 friend void sum(time t1,time t2);
};
void sum(time t1,time t2)
{  time t3;
  int x,y,z;
	x=(t1.seconds+t2.seconds);
	t3.seconds=x%60;
	y=t1.minutes+t2.minutes+x/60;
	t3.minutes=y%60;
	z=t1.hours+t2.hours+y/60;
	t3.hours=z%60;
	cout<<"added time is\t"<<t3.hours<<"hours\t"<<t3.minutes<<"minutes\t"<<t3.seconds<<"seconds";
}
void time::getdata()
{
	cout<<"Enter hours\n";
	cin>>hours;
	cout<<"Enter minutes\n";
	cin>>minutes;
	cout<<"Enter seconds\n";
	cin>>seconds;	
}
int main()
{
	time t1,t2,t3;
	t1.getdata();
	t2.getdata();
	sum(t1,t2);
}
