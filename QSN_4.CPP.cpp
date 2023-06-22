#include <iostream>
using namespace std;
class batsman
{
	int runs,no_of_4,no_of_6;
	char name[10];
	public:
		void getdata();
		void display();
};
void batsman::getdata()
{
	cout<<"Enter the name of batsman";
	cin>>name;
	cout<<endl;
	cout<<"Enter the runs made";
	cin>>runs;
	cout<<endl;
	cout<<"Enter the no of 4's and 6's in the match";
	cin>>no_of_4>>no_of_6;
	cout<<endl;
}
void batsman::display()
{   cout<<"THE INFORMATION OF BATSMAN IS "<<endl;
cout<<endl;
	cout<<"Name of batsman="<<name;
	cout<<endl;
	cout<<"Total runs made ="<<runs;
	cout<<endl;
	cout<<"Num. of 4's and 6's is"<<no_of_4<<"and"<<no_of_6<<"respectively";
	cout<<endl;
}
int main()
{   
	batsman b[5];
	
	for(int i=0;i<5;i++)
	{
		b[i].getdata();
		
	}
	for(int i=0;i<5;i++)
	{
		b[i].display();
		
	}
	
	return 0;
}
