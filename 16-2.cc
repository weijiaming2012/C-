#include<iostream>
using namespace std;

int main()
{
	int donuts,milk;
	double dpg;

	try{
		cout<<"Enter donuts:";
		cin>>donuts;
		cout<<"Enter milk:";
		cin>>milk;

		if(milk<=0)
		{
			throw donuts;
		}

		dpg=donuts/static_cast<double>(milk);
		cout<<"dpg:"<<dpg<<endl;
	}
	catch(int e)
	{
		cout<<e<<endl;
	}

	return 0;
}
