#include <iostream>
using namespace std;
class rectangle
{
	int length,breadth;
	public:
		void getdata()
		{
			cout<<"Enter length and breadth";
			cin>>length>>breadth;
		}
		void calculateArea()
		{
			cout<<"Area of rectangle is ="<<length*breadth;
		}
		
};
int main()
{
	rectangle r;
	r.getdata();
	r.calculateArea();
	return 0;
}
