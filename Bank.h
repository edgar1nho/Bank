#include <string>
#include <iostream> 
class Bank
{
	private:
		std::string name;
		static int account_number;
		double balance;
	public:
		Bank();
		void setName(const std::string& n);
		std::string getName();
		void deposit(double d);
		void withdraw(double d);
		double getBalance();
		int getAccountNumber();
	
};
