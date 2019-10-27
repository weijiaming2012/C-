#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex globalLock;

void func(int a)
{
	globalLock.lock();
	cout<<"Hello "<<a<<" "<<this_thread::get_id()<<endl;
	globalLock.unlock();
}

int main()
{
	thread t1(func,10);
	thread t2(func,20);

	t1.join();
	t2.join();

	return 0;
}
