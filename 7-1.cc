#include<iostream>
using namespace std;

int main()
{
	int i,score[5],max;

	cout<<"Enter 5 scores:\n";
	cin>>score[0];
	max=score[0];
	for(i=1;i<=5;i++)
	{
		cin>>score[i];
		if(max<score[i])
		{
			max=score[i];
		}
	}
	cout<<"The highest score is "<<max<<endl
		<<"The scores and their\n"
		<<"different from the highest are:\n";

	for(i=0;i<5;i++)
	{
		cout<<score[i]<<" off by "
			<<(max-score[i])<<endl;
	}
	
	return 0;
}
