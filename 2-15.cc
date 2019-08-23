#include<iostream>
using namespace std;

int main()
{
	char ans;

	do{
		cout<<"Hello\n";
		cout<<"Do you want another greetings?\n"
			<<"and the press return:";
		cin>>ans;
	}while(ans=='y'||ans=='Y');

	cout<<"Good-Bye\n";

	return 0;
}
