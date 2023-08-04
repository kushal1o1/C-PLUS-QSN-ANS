#include<iostream>
using  namespace std;
class conversion{
	private:
		float ft,inc;
		public: void setdata()
		{
			cout<<"ENter the data i.e feet and inc";
			cin>>ft>>inc;
		}
		operator float ()
		{ float x;
		ft=ft+inc/12;
		x=ft/3.28;
		return(x);
		}
		
};
int main()
{
 float ans;
	conversion c;
	c.setdata();
	ans=c;
	cout<<"The length in metre is "<<ans;
}
