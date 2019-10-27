#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<char> s;

	s.insert('A');
	s.insert('B');
	s.insert('C');
	s.insert('C');
	s.insert('D');

	set<char>::iterator p;
	for(p=s.begin();p!=s.end();p++)
	{
		cout<<*p<<endl;
	}
	
	s.erase('C');
	for(p=s.begin();p!=s.end();p++)
	{
		cout<<*p<<endl;
	}

	return 0;
}
