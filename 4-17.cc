#include<iostream>

// 返回两个数n1和n2的平均值
double ave(double n1,double n2);

// 返回三个数n1,n2和n3的平均值
double ave(double n1,double n2,double n3);

int main()
{
	using namespace std;
	cout<<"ave(2.0,2.6,2.8)="
		<<ave(2.0,2.6,2.8)<<endl;
	
	cout<<"ave(3.5,6.5)="
		<<ave(3.5,6.5)<<endl;

	return 0;
}

double ave(double n11,double n12)
{
	return (n11+n12)/2;
}

double ave(double n1,double n2,double n3)
{
	return (n1+n2+n3)/3;
}
