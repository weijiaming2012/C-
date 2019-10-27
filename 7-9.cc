#include<iostream>
using namespace std;

const int MAX_NUMBER_SCORES=10;

void fillArray(int a[],int size,int& numberUsed);

double computeAverage(const int a[],int numberUsed);

void showDifference(const int a[],int numberUsed);

int main()
{
	int score[MAX_NUMBER_SCORES],numberUsed;

	cout<<"Enter golf scores:\n";
	fillArray(score,MAX_NUMBER_SCORES,numberUsed);
	showDifference(score,numberUsed);

	return 0;
}

void fillArray(int a[],int size,int& numberUsed)
{
	int index=0,next;
	cin>>next;
	while((next>=0)&&(index<size))
	{
		a[index]=next;
		index++;
		cin>>next;
	}
	numberUsed=index;
}

double computeAverage(const int a[],int numberUsed)
{
	double total=0;
	for(int index=0;index<numberUsed;index++)
	{
		total+=a[index];
	}
	if(numberUsed>0)
	{
		return total/numberUsed;
	}
	else
	{
		cout<<"error!\n";
		return 0;
	}
}

void showDifference(const int a[],int numberUsed)
{
	double average=computeAverage(a,numberUsed);
	cout<<"Average="<<average<<endl;
	for(int index=0;index<numberUsed;index++)
	{
		cout<<"differs:"<<a[index]-average<<endl;
	}
}
