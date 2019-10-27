#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;

void readAndClean();

void newLine();

int main()
{
	int n;
	char ans;
	do{
		cout<<"Enter an integer and press return:";
		readAndClean(n);
		cout<<"That string ..."<<n<<endl;
		cout<<"Again?(ye/no):";
		cin>>ans;
		newLine();
	}while((ans!='n')&&(ans!='N'));

	return 0;
}

void readAndClean(int& n)
{
	const int ARRAY_SIZE=6;
	char digitString[ARRAY_SIZE];

	char next;
	cin.get(next);
	int index=0;
	while(next!='\n')
	{
		if((isdigit(next))&&(index<ARRAY_SIZE-1))
		{
			digitString[index]=next;
			index++;
		}
		cin.get(next);
	}
	digitString[index]='\0';

	n=atoi(digitString);
}

void newLine()
{
	
}
