#include<iostream>
using namespace std;

class DayOfYear
{
	private:
		void checkDate();
		int month;
		int day;

	public:
		void input();
		void output();

		void set(int newMonth,int newDay);

		int getMonth();

		int getDay();

};

int main()
{
	DayOfYear today,bachBirthday;
	cout<<"Enter today ...\n";
	today.input();
	cout<<"Today's date is ";
	today.output();

	bachBirthday.set(3,21);
	cout<<"J. S. Bach's birthday is ";
	bachBirthday.output();

	return 0;
}

void DayOfYear::input()
{
	cin>>month>>day;
}

void DayOfYear::output()
{
	cout<<"month="<<month<<",day="<<day<<endl;
}

void DayOfYear::set(int newMonth,int newDay)
{
	month=newMonth;
	day=newDay;
	checkDate();
}

void DayOfYear::checkDate()
{
	
}

int DayOfYear::getMonth()
{
	return month;
}

int DayOfYear::getDay()
{
	return this->day;
}
