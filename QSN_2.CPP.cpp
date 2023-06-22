#include <iostream>
using namespace std;
class rectangle
{
	int length,breadth;
	public:
		void getdata();
	
		void calculateArea();
	
};
void rectangle::getdata()
	{
			cout<<"Enter length and breadth";
			cin>>length>>breadth;
		}
		void rectangle::calculateArea()
			{
			cout<<"Area of rectangle is ="<<length*breadth;
		}
		
int main()
{
	rectangle r;
	r.getdata();
	r.calculateArea();
	return 0;
}
