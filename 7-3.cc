#include<iostream>
using namespace std;

const int NUMBER_OF_EMPLOYEES=3;

int adjustDays(int oldDays,int add=5);

int main()
{
	int vacation[NUMBER_OF_EMPLOYEES],number;

	cout<<"number of employees:"<<NUMBER_OF_EMPLOYEES<<endl;

	for(number=0;number<NUMBER_OF_EMPLOYEES;number++)
		cin>>vacation[number];

	for(number=0;number<NUMBER_OF_EMPLOYEES;number++)
		vacation[number]=adjustDays(vacation[number]);

	for(number=0;number<NUMBER_OF_EMPLOYEES;number++)
		cout<<vacation[number]<<endl;

/*	for(auto x:vacation)
		x=adjustDays(x);

	for(auto x:vacation)
		cout<<x<<endl;*/

	return 0;
}

int adjustDays(int oldDays,int add)
{
	return oldDays+add;
}
