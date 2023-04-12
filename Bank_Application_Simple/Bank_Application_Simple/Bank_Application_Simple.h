// Bank_Application_Simple.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
using namespace std;

// TODO: Reference additional headers your program requires here.

class Account
{

public:
	int acct_no;
	string acct_name;
	double balance;


	void Deposit(int acct_no, string acct_name, double amount);
	void Withdraw(int acct_no, string acct_name, double amount);
	void Display(int acct_no, string acct_name, double amount);
};

void Account:: Deposit(int acct_no, string acct_name, double amount) {

	balance += amount;
}

void Account::Withdraw(int acct_no, string acct_name, double amount)
{
	balance -= amount;
}

void Account::Display(int acct_no, string acct_name, double amount){
}

//Account Class Ends



class Savings :Account {

};

class Checking : Account {


};