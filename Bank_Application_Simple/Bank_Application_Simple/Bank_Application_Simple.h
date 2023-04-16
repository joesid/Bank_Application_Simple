// Bank_Application_Simple.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
using namespace std;

// TODO: Reference additional headers your program requires here.

class Account
{

public:
	int acct_no = 0;
	string acct_name;
	double balance = 0;

	void Create_acct(int act_no, string nam, double amount);
	void Deposit(int act_no, string nam, double amount);
	void Withdraw(int act_no, string nam, double amount);
	void Display();
	double Transfer(int act_no, string nam, double amount, double balance);
	double Get_Balance();
};

double Account:: Get_Balance()
{
	return balance;
}

class Savings : public Account {

	double int_rate = 2.04;
public:
	int acct_no = 0;
	string acct_name;
	double balance = 0;
	void CalculateInterest();
};

void Savings::CalculateInterest()
{

}

int Account::Create_acct(int act_no, string nam, double amount)
{
	return 0;
}

class Checking : Account {
public:
	const double min_bal = 20;


};



//Account Class Ends

void s()
{
	printf(" \n");
}


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
		printf("Creating a Savings Account"); s();
		printf("Please enter account name "); s();
		cin >> acct_name;
		printf("Please enter account number"); s();
		cin >> acct_no;
		printf("Please put in initial Deposit"); s();
		cin >> amount;

		string accttype = "Savings";
		Savings* obj;

		obj = new Savings->Create_acct(acct_no, acct_name, amount);

		//obj->Display();
	}
	else
	{

	}


}  