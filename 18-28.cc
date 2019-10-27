#include<iostream>
#include<thread>

using namespace std;

class Runnable
{
	private:
		int *target,*results;
		int num,start,end;
	public:
		Runnable();
		Runnable(int *target,int *result,int num,int start,int end);
		void operator()();
};

Runnable::Runnable()
{
	target=nullptr;
	results=nullptr;
	num=0;
	start=0;
	end=0;
}

Runnable::Runnable(int *target,int *result,int num,int start,int end)
{
	this->target=target;
	this->results=results;
	this->num=num;
	this->start=start;
	this->end=end;
}

void Runnable::operator()()
{
	int min=target[start];
	for(int i=start+1;i<=end;i++)
	{
		if(target[i]<min)
			min=target[i];
	}
	results[num]=min;
}

int main()
{
	thread tarr[3];
	int target[]={31,66,41,8,92,47,22,87,45,94,4,14};
	int results[]={999,999,999,999};
	for(int i=0;i<3;i++)
	{
		Runnable r(target,results,i,i*4,i*4+3);
		tarr[i]=thread(r);
	}
	for(int i=0;i<3;i++)
	{
		tarr[i].join();
	}
	for(auto item :results)
		cout<<item<<endl;
	int min=results[0];
	for(int i=1;i<3;i++)
	{
		if(min>results[i])
			min=results[i];
	}
	cout<<min<<endl;
}
