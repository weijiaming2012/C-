#include<iostream>

// 从键盘读取两个整数
void getNumbers(int& input1,int& input2);

//交换variable和variable2的值
void swapValues(int& variable1,int& variable2);

//依次显示variable1和variable2的值
void showResults(int output1,int output2);

int main()
{
	int firstNum,secondNum;

	getNumbers(firstNum,secondNum);
	swapValues(firstNum,secondNum);
	showResults(firstNum,secondNum);
}

//使用iostream
void getNumbers(int& input1,int& input2)
{
	using namespace std;
	cin>>input1>>input2;
}

void swapValues(int& variable1,int& variable2)
{
	int temp;

	temp=variable1;
	variable1=variable2;
	variable2=temp;
}

void showResults(int output1,int output2)
{
	using namespace std;
	cout<<"output:"<<output1<<output2<<endl;
}
