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
		friend	increment operator ++(increment &obj);
			void show()
			{
				cout<<"THE number with increment is "<<num;
			}
			
			
};
increment operator ++(increment &obj){
				++obj.num;
			return obj;	
			}
int main()
{
	increment i;
	i.getnum();
	++i;
	i.show();
}

