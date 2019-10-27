#include<iostream>
using namespace std;

int main()
{
	int a=10,*p;
	double c=2.876;
	a=c;
	cout<<c<<endl;
	p=&a;
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;

	return 0;
}
