#include<iostream>
using namespace std;

struct info{
	int num;
	char c;
};

int main()
{
	struct info a={12,3};
	struct info *b=&a;
	cout<<b->num<<endl;

	int a=12;
	int *p=a;
	cout<<*p<<endl;
	return 0;
}
