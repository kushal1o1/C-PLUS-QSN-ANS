#include<iostream>
using namespace std;
class increment
{
	private :
		int num;
		public:
			void getnum()
			{
				cout<<"Enter the number";
				cin>>num;
			}
			void operator ++()
			{
				++num;
			}
			void show()
			{
				cout<<"THE number with increment is "<<num;
			}
			
			
};
int main()
{
	increment i;
	i.getnum();
	++i;
	i.show();
}

