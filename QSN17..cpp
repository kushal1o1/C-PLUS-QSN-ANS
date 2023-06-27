#include <iostream>
using  namespace std;
class Mahendra_highway;
class Prithivi_highway
{
	int km,mtr;
	public: 
	void getdata()
	{
		cout<<"Enter the distance of Prithivi highway in kilometer ";
		cin>>km;
		cout<<"Enter the distance of Prithivi highway in meter";
		cin>>mtr;
	}
	friend void showtotal (Prithivi_highway p,Mahendra_highway m);
};
class Mahendra_highway
{
	int km,mtr;
		public: 
	void getdata()
	{
		cout<<"Enter the distance of mahendra highway in kilometer ";
		cin>>km;
		cout<<"Enter the distance  of mahendra highway in meter";
		cin>>mtr;
	}
	 friend void showtotal (Prithivi_highway p,Mahendra_highway m);
};
 void showtotal(Prithivi_highway p,Mahendra_highway m)
{    
    
	int meter,km,total;
	total=p.mtr+m.mtr;
	meter=total%1000;
	km=p.km+m.km+total/1000;
	cout<<"The added distance is "<<km<<"kilometer and"<<meter<<"meters";
	
}
int main()
{
	Prithivi_highway p;
	Mahendra_highway m;
	p.getdata();
	m.getdata();
	showtotal(p,m);
	return 0;
}
