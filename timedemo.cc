#include<iostream>
#include"dtime.h"
using namespace std;

int main()
{
	DigitalTime clock,oldClock;

	cout<<"Enter the ...\n";
	cin>>clock;

	oldClock=clock;
	clock.advance(15);
	if(clock==oldClock)
	{
		cout<<"Something is wrong.";
	}
	cout<<"You entered "<<oldClock<<endl;
	cout<<"15 minutes ... "
		<<clock<<endl;

	clock.advance(2,15);
	cout<<"2 hours and minutes ...\n"
		<<"the time will be "
		<<clock<<endl;

	return 0;
}
