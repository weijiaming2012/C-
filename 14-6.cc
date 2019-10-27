#include<iostream>
using namespace std;
const int ARRAY_SIZE=10;

void search(const int a[],int first,int last,int key,bool& found,int& location);

int main()
{
	int a[ARRAY_SIZE];
	const int finalIndex=ARRAY_SIZE-1;

	int key,location;
	bool found;
	cout<<"Enter number to be located:";
	cin>>key;
	search(a,0,finalIndex,key,found,location);

	if(found)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}

	return 0;
}

void search(const int a[],int first,int last,int key,bool& found,int& location)
{
	int mid;
	if(first>last)
	{
		found=false;
	}
	else
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			found=true;
			location=mid;
		}
		else if(key<a[mid])
		{		
			search(a,first,mid-1,key,found,location);
		}
		else
		{
			search(a,mid+1,last,key,found,location);
		}
	}
}
