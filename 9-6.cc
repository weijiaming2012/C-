#include<iostream>
#include<cstdlib>
#include<cstddef>

using namespace std;

typedef int* IntArrayPtr;

void fill_array(int a[],int size);

void sort(int a[],int size);

int main()
{
	cout<<"This program sorts ...";

	int arraySize;
	cout<<"How many numbers will be sorted?";
	cin>>arraySize;

	IntArrayPtr a;
	a=new int[arraySize];

	fill_array(a,arraySize);
	sort(a,arraySize);

	cout<<"In sorted order the ...\n";
	for(int i=0;i<arraySize;i++)
	{
		cout<<a[i]<<"   ";
	}

	delete [] a;

	return 0;
}

void fill_array(int a[],int size)
{
	cout<<"Enter number:\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
}

void sort(int a[],int size)
{
	int temp,i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
