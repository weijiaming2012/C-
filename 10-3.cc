#include<iostream>
using namespace std;

class DayOfYear
{
	public:
		void output();
		int month;
		int day;
};

int main()
{
	DayOfYear today,birthday;

	cout<<"Enter today's date:\n";
	cout<<"Enter month as a number:";
	cin>>today.month>>today.day;

	cout<<"Enter your birthday:\n";
	cin>>birthday.month>>birthday.day;

	today.output();
	birthday.output();

	return 0;
}

void DayOfYear::output()
{
	cout<<"month="<<month
		<<",day="<<day<<endl;
}
