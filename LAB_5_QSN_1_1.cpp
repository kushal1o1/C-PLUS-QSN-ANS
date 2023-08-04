#include<iostream>
using namespace std;
class decrement
{
	private :
		int num;
		public:
			void getnum()
			{
				cout<<"Enter the number";
				cin>>num;
			}
			void operator --()
			{
				--num;
			}
			void show()
			{
				cout<<"THE number with decrement is "<<num;
			}
			
			
};
int main()
{
	decrement i;
	i.getnum();
	--i;
	i.show();
}

