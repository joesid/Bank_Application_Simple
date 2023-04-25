// Bank_Application_Simple.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
using namespace std;

// TODO: Reference additional headers your program requires here.

//Account Class
class Account
{

public:
	int acct_no = 0;
	string acct_name;    // Account Name
	double balance = 0;  //Account Balance

	void Create_acct(int act_no, string nam, double amount);
	void Deposit(int act_no, string nam, double amount);
	void Withdraw(int act_no, string nam, double amount);
	void Display();
	double Transfer(int act_no, string nam, double amount, double balance);
	double Get_Balance();
};

//GET ACCOUNT BALANCE 
double Account:: Get_Balance()
{
	return balance;
}


//CREATE ACCOUNT FUNCTION
void Account::Create_acct(int act_no, string nam, double amount)
{

}


//DEPOSIT FUNCTION 
void Account::Deposit(int act_no, string nam, double amount) {

	acct_no = act_no;
	balance += amount;
	acct_name = nam;

}


//TRANSFER FUNCTION
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

//WITHDRAW FUNCTION
void Account::Withdraw(int act_no, string nam, double amount)
{
	balance -= amount;
}

//DISPLAY ACCOUNT DETAILS
void Account::Display()
{

	s();
	cout << "Account Name: " << acct_name << endl;
	//printf("Account Name: %s\n", acct_name);
	cout << "Account Number: " << acct_no << endl;
	cout << "Balance: " << balance << endl;


}



class Savings : public Account {
	//Inherits from Account
	double int_rate = 2.04;
public:
	int acct_no = 0;
	string acct_name;
	double balance = 0;
	void CalculateInterest();
};


void Savings::CalculateInterest()
{
	// Savings Function for Calculating interest

}



class Checking :public Account {

public:
	const double min_bal = 20;   //Minimum Account balance allowed


};


//END OF ACCOUNT CLASS DECLARATIONS AND FUNCTIONS















//THIS FUNCTION SIMPLYS ADDS A NEWLINE
void s()
{
	printf(" \n");
}




//THIS DOES NOT WORK THE WAY IT WAS INTENDED
/* 
void Create_Account()
{
	printf("What type of Account do you want to create  Savings - s / Checkings - c  (s/c) "); s();
	char ansf = 'n';
	cin >> ansf;

	string acct_name;
	int acct_no = 0;
	double amount = 0.0;

	if (ansf == 's')
	{
		//Create savings account
		printf("Creating a Savings Account"); s();
		printf("Please enter account name "); s();
		cin >> acct_name;
		printf("Please enter account number"); s();
		cin >> acct_no;
		printf("Please put in initial Deposit"); s();
		cin >> amount;

		string accttype = "Savings";
		Savings* obj;

		obj = new Savings;

		obj->Deposit(acct_no, acct_name, amount);
		obj->Display();

		//obj->Display();
	}
	else if(ansf == 'c')
	{
		//Create Checkings account
		printf("Creating a Checkings Account"); s();
		printf("Please enter account name "); s();
		cin >> acct_name;
		printf("Please put in inital Deposit"); s();
		cin >> amount;

		string accttype = "Checking";
		Checking* obj;

		obj = new Checking;

		obj->Deposit(acct_no, acct_name, amount);
		obj->Display();

	}

	
}      */