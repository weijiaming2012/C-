#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<char> line;
	line.push_back('a');
	line.push_back('b');
	line.push_back('c');
	line.push_back('d');
	line.push_back('e');
	
	vector<char>::const_iterator where;
	where=find(line.begin(),line.end(),'c');

	vector<char>::const_iterator p;
	for(p=line.begin();p!=where;p++)
	{
		cout<<*p<<endl;
	}

	cout<<endl;

	for(p=where;p!=line.end();p++)
	{
		cout<<*p<<endl;
	}

	return 0;
}
