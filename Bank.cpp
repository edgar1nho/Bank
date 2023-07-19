#include "Bank.h"

int Bank::account_number = 0;

Bank::Bank()
{
	++account_number;
}

void Bank::setName(const std::string& n)
{
	name = n;
}

std::string Bank::getName()
{
	return name;
}

void Bank::deposit(double d)
{
	balance += d;
}

void Bank::withdraw(double d)
{
	if(d > balance)
	{
		std::cout << "failed to withdraw,you dont have that amount of money in your balance\n";
	}
	else
	{
		balance -= d;
	}
}

double Bank::getBalance()
{
	return balance;
}

int Bank::getAccountNumber()
{
	return account_number;
}
