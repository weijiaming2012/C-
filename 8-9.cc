#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	cout<<"Enter a list of ...\n";

	int next;
	cin>>next;
	while(next>0)
	{
		v.push_back(next);
		cout<<next<<" added. ";
		cout<<"v.size()="<<v.size()<<endl;
		cin>>next;
	}
	
	cout<<"You entered:\n";
	for(int x:v)
	{
		cout<<x<<"   ";
	}
	cout<<endl;

	return 0;
}
