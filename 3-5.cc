#include<iostream>
using namespace std;

int main()
{
	int netIncome;
	double taxBill;
	double fivePercentTax,tenPercentTax;

	cout<<"Enter net income (rounded to whole dollars) $";
	cin>>netIncome;

	if(netIncome<=15000)
	{
		taxBill=0;
	}
	else if(netIncome>1500&&netIncome<=25000)
	{
		taxBill=0.05*(netIncome-15000);
	}
	else
	{
		fivePercentTax=0.05*10000;
		tenPercentTax=0.1*(netIncome-25000);
		taxBill=fivePercentTax+tenPercentTax;
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout<<"Net income=$"<<netIncome<<endl
		<<"Tax bill=$"<<taxBill<<endl;

	return 0;
}
