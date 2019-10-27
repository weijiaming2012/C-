#include<iostream>
using namespace std;

class BankAccount
{
public:
	void set(int dollars,int cents,double rate);

	void set(int dollars,double rate);

	void update();

	double getBalance();

	double getRate();

	void output(ostream& outs);

private:
	double balance;
	double interestRate;

	double fraction(double percent);
};

int main()
{
	BankAccount account1,account2;
	cout<<"start of test:\n";
	account1.set(123,99,3.0);
	account1.output(cout);

	account1.set(100,5.0);
	cout<<"account1 new set\n";
	account1.output(cout);

	account1.update();
	cout<<"account1 update:\n";
	account1.output(cout);

	account2=account1;
	cout<<"account2:\n";
	account2.output(cout);

	return 0;
}

void BankAccount::set(int dollars,int cents,double rate)
{
	balance=dollars+0.01*cents;
	interestRate=rate;
}

void BankAccount::set(int dollars,double rate)
{
	balance=dollars;
	interestRate=rate;
}

void BankAccount::update()
{
	balance=balance+fraction(interestRate)*balance;
}

double BankAccount::fraction(double percentValue)
{
	return percentValue/100.0;
}

double BankAccount::getBalance()
{
	return balance;
}

double BankAccount::getRate()
{
	return interestRate;
}

void BankAccount::output(ostream& outs)
{
	outs.setf(ios::fixed);
	outs.setf(ios::showpoint);
	outs.precision(2);
	outs<<"Account balance $"<<balance<<endl;
	outs<<"Interest rate"<<interestRate<<"%"<<endl;
}
