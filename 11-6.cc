#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;

class Money
{
	private:
		long allCents;

	public:
		friend Money operator +(const Money& amount1,const Money& amount2);

		friend Money operator -(const Money& amount1,const Money& amount2);

		friend Money operator -(const Money& amount);

		friend bool operator ==(const Money& amount1,const Money& amount2);


		Money(long dollars,int cents);

		Money(long dollars);

		Money();

		double getValue() const;

		void input(istream& ins);

		void output(ostream& outs) const;
};

int digiToInt(char c);

int main()
{
	Money yourAmount,myAmount(10,9),ourAmount;
	cout<<"Enter an amount of money:";
	yourAmount.input(cin);
	cout<<"Your amount is ";
	yourAmount.output(cout);
	cout<<endl;
	cout<<"My amount is ";
	myAmount.output(cout);
	cout<<endl;

	if(yourAmount==myAmount)
	{
		cout<<"We have the same amounts.\n";
	}
	else
	{
		cout<<"One of us is richer.\n";
	}

	ourAmount=yourAmount+myAmount;
	yourAmount.output(cout);
	cout<<"+";
	myAmount.output(cout);
	cout<<" = ";
	ourAmount.output(cout);
	cout<<endl;

	ourAmount=yourAmount+10000;
	ourAmount.output(cout);

	return 0;
}

Money operator +(const Money& amount1,const Money& amount2)
{
	Money temp;
	temp.allCents=amount1.allCents+amount2.allCents;
	return temp;
}

bool operator ==(const Money& amount1,const Money& amount2)
{
	return amount1.allCents==amount2.allCents;
}

Money operator -(const Money& amount1,const Money& amount2)
{
	Money temp;
	temp.allCents=amount1.allCents-amount2.allCents;
	return temp;
}

Money operator -(const Money& amount)
{
	Money temp;
	temp.allCents=-amount.allCents;
	return temp;
}

Money::Money(long dollars,int cents)
{
	allCents=dollars*100+cents;
}

Money::Money(long dollars)
{
	allCents=dollars*100;
}

Money::Money()
{
	allCents=0;
}

double Money::getValue() const
{
	return allCents*0.01;
}

void Money::input(istream& ins)
{
	ins>>allCents;
}

void Money::output(ostream& outs) const
{
	outs<<allCents;
}

int digitToInt(char c)
{
	return (static_cast<int>(c)-static_cast<int>('0'));
}
