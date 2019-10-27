#include<iostream>
using namespace std;

typedef int* IntPointer;

void sneaky(IntPointer temp);

int main()
{
	IntPointer p;

	p=new int;
	*p=77;
	cout<<"Before ...\n"
		<<*p<<endl;

	sneaky(p);

	cout<<"After ...\n"
		<<*p<<endl;

	delete p;

	return 0;
}

void sneaky(IntPointer temp)
{
	*temp=99;
	cout<<"Inside ..\n"
		<<*temp<<endl;
}
