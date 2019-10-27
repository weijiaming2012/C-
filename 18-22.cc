#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main()
{
	array<int,6> a={100,200,300};
	a[4]=10;
	for(auto item:a)
		cout<<item<<endl;

	sort(a.begin(),a.end());
	for(auto item:a)
		cout<<item<<endl;

	return 0;
}
