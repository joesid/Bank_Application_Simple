// Bank_Application_Simple.cpp : Defines the entry point for the application.
//

#include "Bank_Application_Simple.h"

using namespace std;

int main()
{
	
	Account al;
	al.Deposit(7657, "Joe", 54.0);
	al.Display();

	space();
	printf("Do you want to transfer funds");
	space();

	bool ans = 0;

	char in_ans;

	cin >> in_ans;

	if (in_ans == 'y')
	{    
		string acct_name;
		int acct_no = 0;
		double amount = 0;
		double balance = 0;
		space();


		printf("Input account name \n");
		cin >> acct_name;

		space();
		printf("Input account number \n");
		cin >> acct_no;


		space();
		printf("Input the amount to be tranferred \n");
		cin >> amount;

		balance = al.Get_Balance();
		al.Transfer(acct_no, acct_name, amount, balance); 
	}
	else
	{
		space();
		printf("Cancelling Transfer Operation");
	}
	return 0;
}

void Account::Deposit(int act_no, string nam, double amount) {

	acct_no = act_no;
	balance += amount;
	acct_name = nam;

}

void Account::Withdraw(int act_no, string nam, double amount)
{
	balance -= amount;
}



void Account::Display()
{

	cout << "Account Name: " << acct_name << endl;
	//printf("Account Name: %s\n", acct_name);
	cout << "Account Number: " << acct_no << endl;
	cout << "Balance: " << balance << endl;


}


//Transfer function 
double Account::Transfer(int act_no, string nam, double amount, double balance)
{
	double send_funds = 0;

	if (balance > amount)
	{
		send_funds = balance - amount;
		return send_funds;
	}
	else
	{
		return printf("Insufficient funds");
	}
}
