#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	const double COST_PER_SQ_FT=10.50; // 狗舍每平方英尺价格
	double budget,area,lengthSide;

	cout<<"Enter the amount budgeted for your dog bouse $";
	cin>>budget;

	area=budget/COST_PER_SQ_FT;
	lengthSide=sqrt(area);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"For a price of $"<<budget<<endl
		<<"I can build you a ...\n"
		<<""<<lengthSide
		<<" feet on each side.\n";

	cout.precision(4);
	cout<<lengthSide<<endl;

	return 0;
}
