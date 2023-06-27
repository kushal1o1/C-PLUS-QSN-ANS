# include<iostream>
using namespace std;
class Compare
{
	int n1,n2;
	public:
		void getvalue()
		{
			cout<<"Enter two numbers? \n";
			cin>>n1;
			cin>>n2;
		}
		friend void greatest(Compare c);
};
void greatest(Compare c )
{
	if(c.n1>c.n2)
	cout<<c.n1<<"\tis greater than\t"<<c.n2;
	else
	cout<<c.n2<<"is greater than"<<c.n1;
}
int main()
{
	Compare c;
	c.getvalue();
	greatest( c);
}
