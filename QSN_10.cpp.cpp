//static data member  can only accessed  by static functions
#include<iostream>
using namespace std;
class item
{    int item_number;
	static int count; //static variable
	public:
		void getdata();//defining outside 
	static	void display()//static function
	{
			cout<<"The program runs "<<count<<"times";
		}
}; 
 void item::getdata()//defing func
	{
			cout<<"Enter a number";
			cin>>item_number;
			count=count+1;
		}
int item::count=0; //initializing value to count as 0
int main()
{ item obj1,obj2,obj3,obj4;
   obj1.getdata();
   obj2.getdata();
   obj3.getdata();
   obj1.getdata();
   obj4.getdata();
   item::display();//calling static function
  return 0;
}
