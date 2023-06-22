#include <iostream>
using namespace std;
class box
{
	int length,breadth,height;
	public:
		void readata();
		int showvolume();
};
void box::readata()
{
	cout<<"Enter the length";
	cin>>length;
	cout<<"Enter the breadth";
	cin>>breadth;
	cout<<"Enter the heigth";
	cin>>height;
}
int  box::showvolume()
{
	return (length*breadth*height);
}
int main()
{
	box b;
	b.readata();
	cout<<"The area of rectangle is "<<b.showvolume();
}


