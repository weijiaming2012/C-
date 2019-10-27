#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<char> container;
	container.push_back('A');
	container.push_back('B');
	container.push_back('C');
	container.push_back('D');
	for(int i=0;i<4;i++)
	{
		cout<<container[i]<<"\n";
	}

	vector<char>::iterator p=container.begin();
	cout<<container[2]<<endl;
	cout<<p[2]<<endl;
	cout<<*(p+2)<<endl;

	p=container.begin();
	p++;
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;

	return 0;
}
