#include<iostream>
using namespace std;
template <class q>
class sum
{private :
 q num1,num2;
 public:
 	void getnum()
 	{
 		cout<<"ENTer the  numbers";
 		cin>>num1>>num2;
 		
	 }
void add()
{
	cout<<"the sum is "<<num1+num2;
 } 
	
};
int main()
{
	sum <int>obj1;
	sum<float>obj2;
	obj1.getnum();
	obj1.add();
	obj2.getnum();
	obj2.add();
	return 0;
	
}
