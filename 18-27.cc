#include<iostream>
#include<thread>
using namespace std;

class Runnable
{
	private:
		int num;
	public:
		Runnable();
		Runnable(int n);
		void operator()();
		void print();
};

Runnable::Runnable():num(0){}

Runnable::Runnable(int n):num(n){}

void Runnable::operator()()
{
	cout<<"Hello world, "<<num<<endl;
}

void Runnable::print()
{
	cout<<num<<endl;
}

int main()
{
	Runnable r1(10);
	Runnable r2(20);
	/*r1=r2;
	r1.print();
	r1=Runnable(30);
	r1.print();*/
	
	thread t1(r1);
	thread t2(r2);

	t1.join();
	t2.join();
	
	return 0;
}
