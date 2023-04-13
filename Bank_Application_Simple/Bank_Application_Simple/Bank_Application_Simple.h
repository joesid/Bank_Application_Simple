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
};

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
	cout << "Account Number: " << acct_no << endl;
	cout << "Balance: " << balance << endl;


}

//Account Class Ends



class Savings :Account {

};

class Checking : Account {


};



