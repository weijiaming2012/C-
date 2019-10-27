#include<iostream>
using namespace std;

class DayOfYear
{
	private:
		int month;
		int day;
		void checkDate();

	public:
		friend bool equal(DayOfYear date1,DayOfYear date2);
		DayOfYear(int theMonth,int theDay);

		DayOfYear();

		void input();

		void output();

		int getMonth();

		int getDay();
};

//bool equal(DayOfYear date1,DayOfYear date2);

int main()
{
	DayOfYear today,bachBirthday(3,21);
	cout<<"Enter today's date:\n";
	today.input();
	cout<<"Today's date is: ";
	today.output();
	if(equal(today,bachBirthday))
	{
		cout<<"Happy ..\n";
	}
	else
	{
		cout<<"Unhappy ..\n";
	}

	return 0;
}

/*bool equal(DayOfYear date1,DayOfYear date2)
{
	if((date1.getMonth()==date2.getMonth())
		&&(date1.getDay()==date2.getDay()))
		return true;
	else
		return false;
}*/

bool equal(DayOfYear date1,DayOfYear date2)
{
	return date1.month==date2.month && date1.day==date2.day;
}

DayOfYear::DayOfYear(int theMonth,int theDay):
	month(theMonth),day(theDay){}

DayOfYear::DayOfYear():month(0),day(0){}

void DayOfYear::input()
{
	cin>>month>>day;
}

void DayOfYear::output()
{
	cout<<"month="<<month<<",day="<<day<<endl;
}

int DayOfYear::getMonth()
{
	return month;
}

int DayOfYear::getDay()
{
	return day;
}


