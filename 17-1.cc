#include<iostream>
using namespace std;

template<class T>
void swapValue(T& variable1,T& variable2)
{
	T temp;
	temp=variable1;
	variable1=variable2;
	variable2=temp;
}

int main()
{
	int integer1=1,integer2=2;
	swapValue(integer1,integer2);
	cout<<"swap(1,2):"<<integer1<<"\t"<<integer2<<endl;

	char symbol1='A',symbol2='B';
	swapValue(symbol1,symbol2);
	cout<<"swap(A,B):"<<symbol1<<"\t"<<symbol2<<endl;

	return 0;
}
