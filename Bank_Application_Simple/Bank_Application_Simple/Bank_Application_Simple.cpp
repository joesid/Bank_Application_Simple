// Bank_Application_Simple.cpp : Defines the entry point for the application.
//

#include "Bank_Application_Simple.h"

using namespace std;



int main() {

	char ans = 'n';

	printf("Do you want to create an Account (Y/N)");  s();
	cin >> ans;

	int num = 3;
	string rl = "name";
	double dnum = 34.3;

	Account Joe(3, rl, dnum);

	if (ans == 'y') 
	{
		int acctnum = 0;
		string accountName;
		double amount;

		cout << "Enter account name: ";
		cin >> accountName;

		cout << "Enter account Number: ";
		cin >> acctnum;

		cout << "Enter amount to be paid: ";
		cin >> amount;

		Account myAccount(acctnum, accountName, amount);

	}
	else if (ans == 'n')
	{
		printf("Exiting Application,  Thank You "); s();
	}
	else
	{
		printf("You entered the wrong input"); s();
	}

	return 0;
} 

//Test Git Push 




