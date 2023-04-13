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
