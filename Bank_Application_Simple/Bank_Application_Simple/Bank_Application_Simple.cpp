// Bank_Application_Simple.cpp : Defines the entry point for the application.
//

#include "Bank_Application_Simple.h"

using namespace std;

int main()
{
	
	Account al;
	al.Deposit(7657, "Joe", 54.0);
	al.Display();

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
