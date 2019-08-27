#include<iostream>
using namespace std;

char grade(int received_par,int min_score_par);
// 如果received_par大于或等于min_score_par，返回'p'标识几个
// 是否返回'F'标识不及格

int main()
{
	int score,needToPass;
	char letterGrade;

	cout<<"Enter your score"
		<<" and the minimum needed to pass:\n";
	cin>>score>>needToPass;

	letterGrade=grade(needToPass,score);

	cout<<"You ..."<<endl
		<<"..."<<needToPass<<endl;

	if(letterGrade=='P')
	{
		cout<<"You Passed.";
	}
	else
	{
		cout<<"Sorry.You failed\n";
	}

	cout<<letterGrade
		<<" will be entered in your record.\n";
	
	return 0;
}

char grade(int received_par,int min_score_par)
{
	if(received_par>=min_score_par)
		return 'P';
	else
		return 'F';
}
