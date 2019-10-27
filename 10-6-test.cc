#include<iostream>
using namespace std;

class Test
{
	private:
		int x;
		int y;
	public:
		Test(int x,int y):x(x),y(y){};
};

int main()
{
	Test test(1,1);

	return 0;
}
