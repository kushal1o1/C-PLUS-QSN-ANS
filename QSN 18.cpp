#include <iostream>
using namespace std;
class bank
{
	private:
	int principle,time;
	float rate;
	public:
		 void getdata(float z=13.12)
		{  
		  rate=z;
			cout<<"Enter the principle of customer";
			cin>>principle;
			cout<<"Enter the time in yrs of customer";
			cin>>time;
			
			
			
			
		}
	 	void display()
		{
		
	
			cout<<"Simple intrest of customer is "<<(principle*time*rate)/100<<"rupees";
		
		}
};
int main()
{    

   int n,i;
   cout<<"Enter the numbers of customers";
   cin>>n;
	bank b[n];
	for(i=0;i<n;i++)
	{
		b[i].getdata();
	}
for(i=0;i<n;i++)
	{
		b[i].display();
		cout<<endl;
	}	
	return 0;
}
