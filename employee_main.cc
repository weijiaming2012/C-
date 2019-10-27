#include<iostream>
//#include"hourlyemployee.h"
#include"salariedemployee.h"
using std::cout;
using std::endl;
using namespace employeessavitch;

int main()
{
	SalariedEmployee joe;
	joe.setName("Jack");
	joe.setSSN("123-456");
	joe.setNetPay(100);
	joe.setSalary(300);
	joe.printCheck();

	cout<<joe.getName()<<"\t"<<joe.getSSN()<<"\t"<<joe.getNetPay()<<endl;

	return 0;
}
