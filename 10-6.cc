#include<iostream>
using namespace std;

class BankAccount
{
	private:
		double balance;
		double interestRate;
		double fraction(double percent);

	public:
		BankAccount(int dollars,int cents, double rate);
		BankAccount(int dollars,double rate);
		BankAccount();

		void set(int dollars,int cents,double rate);

		void set(int dollars,double rate);

		void update();

		double getBalance();

		double getRate();

		void output(ostream& outs);
};

class SavingsAccount:public BankAccount
{
	public:
		SavingsAccount(int dollars,int cents,double rate);

		void deposut(int dollars,int cents);

		void withdraw(int dollars,int cents);
};

int main()
{
/*	BankAccount account1(100,2.3),account2;

	cout<<"account1 ...\n";
	account1.output(cout);
	cout<<"account2 ...\n";
	account2.output(cout);

	account1=BankAccount(999,99,5.5);
	cout<<"account1 ...\n";
	account1.output(cout);*/

	SavingsAccount accout(100,50,5.5);
	accout.output(cout);

	cout<<"Depositing:\n";
	account.deposite(10,25);
	account.output(cout);

	cout<<"Withdrawing:\n";
	account.withdraw(11,80);
	account.output(cout);


	return 0;
}

BankAccount::BankAccount(int dollars,int cents,double rate)
{
	balance=dollars+0.01*cents;
	interestRate=rate;
}

BankAccount::BankAccount(int dollars,double rate)
{
	balance=dollars;
	interestRate=rate;
}

BankAccount::BankAccount():balance(0),interestRate(0.0){}

SavingsAccount::SavingsAccount(int dollars,int cents,double rate):
	BankAccount(dollars,cents,rate){}

void SavingsAccount::deposit(int dollars,int cents)
{
	double balance=getBalance();
	balance+=dollars;
	balance+=(static_cast<double>(cents)/100);
	int newDollars=static_cast<int>(balance);
	int newCents=static_cast<int>((balance-newDollars)*100);
	set(newDollars,newCents,getRate());
}

void SavingsAccount::withdraw(int dollars,int cents)
{
	double balance=getBalance();
	balance-=dollars;
	balance-=static_cast<double>(cents)/100;
	int newDollars=static_cast<int>(balance);
	int newCents=static_cast<int>((balance-newDollars)*100);
	set(newDollars,newCents,getRate());
}
