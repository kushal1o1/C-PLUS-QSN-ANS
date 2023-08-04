#include<iostream>
using namespace std;
class postincrement
{
	private :
		int num;
		public:
			void getnum()
			{
				cout<<"Enter the number";
				cin>>num;
			}
		friend	postincrement operator ++(postincrement &obj,int dunno);
			void show()
			{
				cout<<"THE number with increment is "<<num;
			}
			
			
};
postincrement operator ++(postincrement &obj,int dunno){
				obj.num++;
			return obj;	
			}
int main()
{
	postincrement i;
	i.getnum();
	i++;
	i.show();
}

