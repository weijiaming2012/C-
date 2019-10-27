#include<iostream>
using namespace std;

namespace savitch1
{
	void greeting();
}

namespace savitch2
{
	void greeting();
}

void bigGreeting();

//using namespace savitch1;
//using namespace savitch2;

int main()
{
	savitch1::greeting();

	savitch2::greeting();

	bigGreeting();

	return 0;
}

namespace savitch1
{
	void greeting()
	{
		cout<<"greeting1 ...\n";
	}
}

namespace savitch2
{
	void greeting()
	{
		cout<<"greeting2 ...\n";
	}
}

void bigGreeting()
{
	cout<<"A Big ...\n";
}
