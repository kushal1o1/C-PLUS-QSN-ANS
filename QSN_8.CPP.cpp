#include <iostream>
using namespace std;
class person
{
	char name[10],address;
	int age,voting_id;
	public:
		void getdata();
		void display();
		
};
void person::getdata()
{
	cout<<"Enter your name";
	cin>>name;
	cout<<endl;
	cout<<"Enter your  age ";
	cin>>age;
	cout<<endl;
	if(age>18)
	{voting_id=101;
	}
	else
	voting_id=0;
}

void person::display()
{
	cout<<"Name="<<name<<endl;
	cout<<"Age="<<age<<endl;
	cout<<"Voter id="<<voting_id<<endl;
	
}
int main()
{
	person p;
	p.getdata();
	p.display();
}
	
