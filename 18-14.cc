#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string,string> plants;

	plants["A"]="aaa";
	plants["B"]="bbb";
	plants["C"]="ccc";

	if(plants.find("B")!=plants.end())
	{
		cout<<"exists.\n";
	}

	if(plants.find("")==plants.end())
	{
		cout<<"not exists.\n";
	}

	map<string,string>::iterator p;
	for(p=plants.begin();p!=plants.end();p++)
	{
		cout<<p->first<<"\t"<<p->second<<endl;
	}

	return 0;
}
