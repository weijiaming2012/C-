#include<iostream>
#include<string>
#include"salariedemployee.h"
using namespace std;

namespace employeessavitch
{
	SalariedEmployee::SalariedEmployee():Employee(),salary(0){}

	SalariedEmployee::SalariedEmployee(string theName,string theNumber,double theWeeklySalary):Employee(theName,theNumber),salary(theWeeklySalary){}

	double SalariedEmployee::getSalary() const
	{
		return salary;
	}

	void SalariedEmployee::setSalary(double newSalary)
	{
		salary=newSalary;
	}

	void SalariedEmployee::printCheck()
	{
		setNetPay(salary);
		cout<<"Error next.\n";
	}
}
