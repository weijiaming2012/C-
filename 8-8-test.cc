#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i;
	double d;
	string s;
	i=stoi("35");
	d=stod("2.5");
	s=to_string(d*2);

	cout<<i<<"   "<<d<<"   "<<s<<endl;
	
	return 0;
}
