#include<iostream>
#include"genericlist.h"
#include"genericlist.cc"

using namespace std;
using namespace listsavitch;

int main()
{
	GenericList<int> firstList(2);
	firstList.add(1);
	firstList.add(2);
	cout<<firstList;

	GenericList<char> secondList(10);
	secondList.add('A');
	secondList.add('B');
	secondList.add('C');
	cout<<secondList;

	return 0;
}
