#include <iostream>
using namespace std;
class bank
{	
	char name[10],acctype[20];
	int accnum,balance;
	public:
		void getvalue()
		{
			cout<<"Enter name,acc num,acc type,balance";
			cin>>name>>accnum>>acctype>>balance;//acctype normal hana
		}
		void deposit(){
			int depo;
		cout<<"Enter ammount u wanna deposit";
		cin>>depo;
		balance=balance+depo;
		cout<<"RS"<<depo<<" "<<"is sucessfully deposited"<<endl;
		}
		void withdraw()
		{    int withdraw;
		  cout<<"Your balance is"<<"RS"<<balance<<endl;
			cout<<"Enter the ammount u wanna withdraw";
			cin>>withdraw;
			if(withdraw>balance)
			cout<<"SORRY INSUFFICINET BALANCE"<<endl;
			else
			{
			balance=balance-withdraw;
			cout<<"RS"<<withdraw<<"has been sucessfully withdraw"<<endl;
}
		}
		void display()
		{
			cout<<"NAME:"<<name<<endl;
			cout<<"ACCOUNT TYPE:"<<acctype<<endl;
			cout<<"BALANCE="<<balance;
		}
};
int main()
{
	bank b;
	b.getvalue();
	b.deposit();
	b.withdraw();
	b.display();
}
