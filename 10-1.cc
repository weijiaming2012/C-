#include<iostream>
using namespace std;

struct CDAccount
{
	double balance;
	double interestRate;
	int term;
};

void getData(CDAccount& theAccount);

int main()
{
	CDAccount account;
	getData(account);

	double rateFraction,interest;
	rateFraction=account.interestRate/100.0;
	interest=account.balance*rateFraction*(account.term/12.0);
	account.balance=account.balance+interest;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"When your CD matures in "
		<<account.term<<" months,\n"
		<<"it will have ..."
		<<account.balance<<endl;
	return 0;
}

void getData(CDAccount& theAccount)
{
	cout<<"Enter balance,interestRate,term:\n";
	cin>>theAccount.balance>>theAccount.interestRate>>theAccount.term;
}
