// Bank_Application_Simple.cpp : Defines the entry point for the application.
//

#include "Bank_Application_Simple.h"

using namespace std;



int main()
{

	char ans = 'n';

	printf("Do you want to create an Account (Y/N)");  s();
	cin >> ans;

	if (ans == 'y') {

		printf("Enter the intended account name"); s();

		string account_name;
		cin >> account_name;
		
		string name = account_name;

		Account* name;
		Account Joe;

		Joe->Create 
		name.
		
		

	}
	else if (ans == 'n')
	{
		printf("Exiting Application,  Thank You "); s();
	}
	else
	{
		printf("You entered the wrong input"); s();
	}


	

	// PERFORM ANOTHER FUNCTION AFTER ACCOUNT CREATION 

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
			Create_Account();
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

	} 
	




	//   INITIAL ACCOUNT CREATION CODE 
	/*  Account al;
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
	}*/



	return 0;
} 










void Transfer()
{

	 double balance = obj->   //

	double send_funds = 0;
	
	printf("Enter Account you want to tranfer from"); s();
	string acct_nam;
	cin >> acct_nam;
	
	printf("Enter account number you want to transfer to"); s();
	int acct_no = 0;
	cin >> acct_no;

	printf("Enter the amount you want to tranfer "); s();
	double amount;
	cin >> amount;

	

	if (balance > amount)
	{
		send_funds = balance - amount;
		 send_funds;
	}
	else
	{
		 printf("Insufficient funds");
	}
	
}

