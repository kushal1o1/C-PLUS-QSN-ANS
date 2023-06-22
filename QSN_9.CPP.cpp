//
#include <iostream>
using namespace std;
class employee {
	char employee_name[10],employee_address[10];
    int employee_phone,salary,net_salary,tax; 
   int calculate() 
     { 
 	tax=0.13*salary;
 	 return (salary-tax);
 }
	public:
		void input()
		{
			cout<<"Enter employee_name";
			cin>>employee_name;
			cout<<"Enter employee_address";
			cin>>employee_address;
			cout<<"Enter employee phone num ,salary";
			cin>>employee_phone>>salary;	
		}
		void func()
		{
			net_salary=calculate();
		}
		void output()
		{
			cout<<"The information is as  folllow "<<endl;
			cout<<"Employee name "<<employee_name<<endl;
			cout<<"Employee  address"<<employee_address<<endl;
			cout<<"Employee phone "<<employee_phone;
			cout<<"Net salary"<<net_salary;
		}
};
 int main()
 {
 	employee obj1;
 	obj1.input();
 	obj1.func();
 	obj1.output();
 }
