#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> container;
	for(int i=1;i<=4;i++)
	{
		container.push_back(i);
	}

	cout<<"Here is what is in the container:\n";
	vector<int>::iterator p;
	for(p=container.begin();p!=container.end();p++)
	{
		cout<<*p<<"\t";
	}
	cout<<endl;

	cout<<"Setting entries to 0:\n";
	for(p=container.begin();p!=container.end();p++)
	{
		*p=0;
	}

	cout<<"Container now container:\n";
	for(p=container.begin();p!=container.end();p++)
	{
		cout<<*p<<"\t";
	}
	cout<<endl;

	return 0;
}
