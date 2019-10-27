#ifndef DTIME_H
#define DTIME_H

#include<iostream>
using namespace std;

class DigitalTime
{
	private:
		int hour;
		int minute;
	
	public:
		friend bool operator ==(const DigitalTime& time1,const DigitalTime& time2);

		DigitalTime(int theHour,int theMinute);

		DigitalTime();

		void advance(int minutesAdded);

		void advance(int hoursAdded,int minutesAdded);

		friend istream& operator >>(istream& ins,DigitalTime& theObject);

		friend ostream& operator <<(ostream& outs,const DigitalTime& theObject);

};

#endif
