#include<iostream>
using namespace std;

void bubbleSort(int arr[],int length)
{
	int i,j;
	for(i=0;i<length-1;i++)
	{
		for(j=0;j<length-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int arr[6],i;
	for(i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	bubbleSort(arr,6);
	for(i=0;i<6;i++)
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}
