// Bank_Application_Simple.cpp : Defines the entry point for the application.
//

#include "Bank_Application_Simple.h"

using namespace std;



int main() {

	char ans = 'n';

	printf("Do you want to create an Account (Y/N)");  s();
	cin >> ans;

	Account myAccount;

	if (ans == 'y') 
	{

		
		myAccount.Create_acct();

		/*
		printf("Enter the intended account name"); s();

		string account_name;
		cin >> account_name;

		printf("Enter the account type"); s();
		
		string name = account_name;

		Account* name;
		Account Joe;

	*/

	}
	else if (ans == 'n')
	{
		printf("Exiting Application,  Thank You "); s();
	}
	else
	{
		printf("You entered the wrong input"); s();
	}


	myAccount.Display();

	// PERFORM ANOTHER FUNCTION AFTER ACCOUNT CREATION 
	/*
	 printf("Do you want to perform another function"); s();
	char ans = 'n';

	if (ans = 'y')
	{
		printf("What task do you want to perform");
		printf("Withdraw");
		printf("Deposit");
		printf("Transfer");
		printf("Create New Account");

		char ans = 'n';

		switch (ans) {
		case 'c':
			myAccount.CreateAccount();
			break;
		case 't':
			Transfer();
		case 'd':
			//Call Deposit Function
			printf("Supossed to call the deposit function");
			break;
		case 'w':
			//Call Withdraw Function
			printf("Withdrawing");
			break;
		default:
			printf(" you entered the wrong letter");
			break;
			//double Account::Transfer(int act_no, string nam, double amount, double balance)
			
		}

	} */
	

	return 0;
} 






