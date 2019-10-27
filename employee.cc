#include<string>
#include<cstdlib>
#include<iostream>
#include"employee.h"
using namespace std;

namespace employeessavitch
{
	Employee::Employee():name("No number yet"),ssn("No number yet"),netPay(0){}

	Employee::Employee(string theName,string theNumber):name(theName),ssn(theNumber),netPay(0){}

	string Employee::getName() const
	{
		return name;
	}

	string Employee::getSSN() const
	{
		return ssn;
	}

	double Employee::getNetPay() const
	{
		return netPay;
	}

	void Employee::setName(string newName)
	{
		name=newName;
	}

	void Employee::setSSN(string newSSN)
	{
		ssn=newSSN;
	}

	void Employee::setNetPay(double newNetPay)
	{
		netPay=newNetPay;
	}

	void Employee::printCheck() const
	{
		cout<<"\nERROR.\n";
		exit(1);
	}
}
