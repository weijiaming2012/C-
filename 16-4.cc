#include<iostream>
#include<string>
using namespace std;

class NegativeNumber
{
	public:
		NegativeNumber();
		NegativeNumber(string takeMeToYourCatchBlock);
		string getMessage();
	private:
		string message;
};

class DivideByZero
{};

int main()
{
	int jemHadar,klingons;
	double portion;

	try{
		cout<<"jemHader:";
		cin>>jemHadar;
		if(jemHadar<0)
		{
			throw NegativeNumber("Jem Hader");
		}
		cout<<"klingons:";
		cin>>klingons;
		if(klingons<0)
			throw NegativeNumber("Klingons");
		if (klingons!=0)
		{
			portion=jemHadar/static_cast<double>(klingons);
		}
		else
			throw DivideByZero();
		cout<<"Each Klingon must fight "<<portion<<endl;
	}

	catch(NegativeNumber e)
	{
		cout<<e.getMessage()<<endl;
	}

	catch(DivideByZero)
	{
		cout<<"Send for help.\n";
	}

	cout<<"end of program.\n";

	return 0;
}

NegativeNumber::NegativeNumber(){}

NegativeNumber::NegativeNumber(string takeMeToYourCatchBlock):message(takeMeToYourCatchBlock){}

string NegativeNumber::getMessage()
{
	return message;
}

