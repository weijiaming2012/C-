#include<iostream>
using namespace std;

void test(int arr[][3],int len1,int len2)
{
	int i,j;
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			cout<<arr[i][j]<<endl;
		}
	}
}

int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}

	test(a,3,3);

	return 0;
}
