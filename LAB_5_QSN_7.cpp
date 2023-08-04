#include<iostream>
using namespace std;
template <class q>
class sum
{private :
 q num1,num2;
 public:
 	void getnum()
 	{
 		cout<<"ENTer num1=";
 		cin>>num1;
 		cout<<"Enter num2=";
 		cin>>num2;
 		
	 }
void swap()
{     int temp;
     temp=num1;
     num1=num2;
     num2=temp;
	cout<<"after swapping"<<endl;
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2;
 } 
	
};
int main()
{
	sum <int>obj1;
	
	obj1.getnum();
	obj1.swap();
	return 0;
	
}
