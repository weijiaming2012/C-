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

		friend bool operator <(const Money& amount1,const Money& amount2);

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
	Money amount[5],max;
	int i;

	for(i=0;i<5;i++)
	{
		amount[i].input(cin);
	}
	
	max=amount[0];
	Money difference[5];
	for(i=1;i<5;i++)
	{
		if(max<amount[i])
		{
			max=amount[i];
		}
	}

	for(i=0;i<5;i++)
	{
		difference[i]=max-amount[i];
	}

	for(auto x:difference)
	{
		x.output(cout);
	}

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

bool operator <(const Money& amount1,const Money& amount2)
{
	if(amount1.allCents<amount2.allCents)
		return true;
	return false;
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
	outs<<allCents<<"   ";
}

int digitToInt(char c)
{
	return (static_cast<int>(c)-static_cast<int>('0'));
}
