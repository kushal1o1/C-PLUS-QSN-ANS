#include<iostream>
using namespace std;
class TU;
class PU{
	int no_of_phds;
	public:
		PU()
		{
			cout<<"Enter num of students of phds\n";
		  cin>>no_of_phds;
		}
		friend void showtotal(PU p,TU t);
	
		 friend class TU;
};
	 
class TU{
	int no_of_researchers;
	 public:
	 	TU()
		{
			cout<<"Enter num of students of researchers\n";
		  cin>>no_of_researchers;
		}
	 void showdifference(PU p)
	{ if(p.no_of_phds>no_of_researchers)
		cout<<"differences of students ="<<p.no_of_phds-no_of_researchers<<"\n";
	 else
	  cout<<"differences of students ="<<-p.no_of_phds+no_of_researchers<<"\n";
}
friend class PU;
friend void showtotal(PU p,TU t);
};
void showtotal(PU p,TU t)
{
	cout<<"Total students="<<(p.no_of_phds+t.no_of_researchers)<<"\n";
 }
int main()
{
	TU t;
	PU p;
	showtotal(p,t);
	t.showdifference(p);
	
	
}
