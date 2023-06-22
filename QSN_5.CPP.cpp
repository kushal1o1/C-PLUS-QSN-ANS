#include <iostream>
using namespace std;
class calculate
{
	int num,reverse1=0,lastdigit;
	public:
		void getnum();
		int reverse();
		
};
void calculate::getnum()
{
	cout<<"Enter the number you want to reverse"<<endl;
	cin>>num;
}
int calculate::reverse()
{
	while(num!=0)
	{
		lastdigit=num%10;
		num=num/10;
		reverse1=reverse1*10+lastdigit;
	}
	return reverse1;
	
}
int main()
{
	calculate c;
	c.getnum();
	c.reverse();
	cout<<"The reverse of"<<"is"<<c.reverse();
	
	
}
