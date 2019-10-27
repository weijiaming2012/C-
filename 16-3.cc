#include<iostream>
using namespace std;

class NoMilk
{
	private:
		int count;
	public:
		NoMilk();
		NoMilk(int howMany);
		int getDonuts();
};

int main()
{
	int donuts,milk;
	double dpg;

	try
	{
		cout<<"donuts:";
		cin>>donuts;
		cout<<"milk:";
		cin>>milk;
		if(milk<=0)
			throw NoMilk(donuts);

		dpg=donuts/static_cast<double>(milk);
		cout<<"dpg:"<<dpg<<endl;
	}
	catch(NoMilk e)
	{
		cout<<e.getDonuts()<<endl;
	}

	cout<<"end of program.";

	return 0;
}

NoMilk::NoMilk():count(0){}

NoMilk::NoMilk(int howMany):count(howMany){}

int NoMilk::getDonuts()
{
	return count;
}
