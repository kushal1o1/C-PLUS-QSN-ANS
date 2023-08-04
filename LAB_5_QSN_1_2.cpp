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
		friend	decrement operator --(decrement &obj);
			void show()
			{
				cout<<"THE number with decrement is "<<num;
			}
			
			
};
decrement operator --(decrement &obj){
				--obj.num;
			return obj;	
			}
int main()
{
	decrement i;
	i.getnum();
	--i;
	i.show();
}

