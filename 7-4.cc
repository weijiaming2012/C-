#include<iostream>
using namespace std;

void fillUp(int a[],int size);

int main()
{
	int a[5],num=5;
	fillUp(a,num);

	for(auto x:a)
		cout<<x<<endl;

	return 0;
}

void fillUp(int a[],int size)
{
	int i;
	cout<<"Enter"<<size<<endl;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
}
