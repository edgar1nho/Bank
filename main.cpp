#include "Bank.h"
#include <iostream>

int main()
{
	Bank p1;
	p1.setName("Edgar");
	p1.deposit(15000);
	p1.withdraw(18000);
	p1.withdraw(5000);
	std::cout << p1.getName() << " " << p1.getBalance() << " " << p1.getAccountNumber() << '\n';
	Bank p2;
	std::cout << p2.getAccountNumber();
}

