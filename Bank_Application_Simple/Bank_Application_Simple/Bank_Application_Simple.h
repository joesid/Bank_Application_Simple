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
	double balance = 0;


	void Deposit(int act_no, string nam, double amount);
	void Withdraw(int act_no, string nam, double amount);
	void Display();
	double Transfer(int act_no, string nam, double amount, double balance);
};


class Savings :Account {

	double int_rate = 2.04;
public:
	void CalculateInterest();
};

void Savings::CalculateInterest()
{

}

class Checking : Account {
public:
	const double min_bal = 20;


};



//Account Class Ends




