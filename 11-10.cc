#include<iostream>
#include<cstdlib>
using namespace std;

const int MAX_LIST_SIZE=50;

class TemperatureList
{
	private:
		double list[MAX_LIST_SIZE];
		int size;

	public:
		TemperatureList();

		void addTemperature(double temperature);

		bool full() const;

		friend ostream& operator <<(ostream& outs,const TemperatureList& theObject);
		
};

TemperatureList::TemperatureList():size(0){}

void TemperatureList::addTemperature(double temperature)
{
	if(full())
	{
		cout<<"Error ..\n";
		exit(1);
	}
	else
	{
		list[size]=temperature;
		size+=1;
	}
}

bool Temperature::full() const
{
	return size==MAX_LIST_SIZE;
}

ostream& operator <<(ostream& outs,const TemperatureList& theObject)
{
	for(int i=0;i<theObject.size;i++)
	{
		outs<<theObject.list[i]<<" F\n";
	}
	return outs;
}
