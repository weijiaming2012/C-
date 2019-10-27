#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char get;
	cin.get(get);
	cout.put(get);

	char next;
	do{
		cin.get(next);
		if(isspace(next))
		{
			cout<<"-";
		}
		else
			cout<<next;
	}while(next!='.');

	return 0;
}
