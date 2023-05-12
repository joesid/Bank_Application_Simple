// Bank_Application_Simple.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <string>
using namespace std;

// TODO: Reference additional headers your program requires here.

//Account Class
class Account
{

public:
	int accountNumber = 0;
	string accountName;
	double accountBalance = 0.0;

	void Create_acct();
	void Deposit(double amount);
	void Withdraw(int act_no, string nam, double amount);
	void Display();
	double Transfer(double amount);
	double Get_Balance();
};

//GET ACCOUNT BALANCE 
double Account:: Get_Balance()
{
	return accountBalance;
}


//CREATE ACCOUNT FUNCTION
void Account::Create_acct()
{
	
	cout << "enter Account Name " << endl;
	std::cin.ignore(); //ignore the newline character in the input
	std::getline(std::cin, accountName);

	
	std::cout << "Enter Account Number " << endl;
	cin >> accountNumber;
	
	std::cout << "Enter Initial Balance: " << endl;
	std::cin >> accountBalance;

}


//DEPOSIT FUNCTION 
void Account::Deposit(double amount) {

	accountBalance += amount;

}


//TRANSFER FUNCTION
double Account::Transfer(double amount)
{
	double balance  = Get_Balance();
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
	accountBalance -= amount;
}

//DISPLAY ACCOUNT DETAILS
void Account::Display()
{

	s();
	cout << "Account Name: " << accountName << endl;
	//printf("Account Name: %s\n", acct_name);
	cout << "Account Number: " << accountNumber << endl;
	cout << "Balance: " << accountBalance << endl;


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