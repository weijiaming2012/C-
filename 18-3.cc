#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<char> container;
	container.push_back('A');
	container.push_back('B');
	container.push_back('C');
	
	vector<char>::iterator p;
	for(p=container.begin();p!=container.end();p++)
	{
		cout<<*p<<endl;
	}

	vector<char>::reverse_iterator p2;
	for(p2=container.rbegin();p2!=container.rend();p2++)
	{
		cout<<*p2<<endl;
	}

	return 0;
}
