#include<iostream>
using namespace std;

//函数定义
//定义一个加法函数，实现两个数相加 
//定义时 num1和num2没有真实数据 只是形式参数 调用函数时 实参的值会传递给形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}


//值传递 
//void 不需要返回值
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	//return ; 当函数声明时，不需要返回值，可以不写return
}

int main18() {
	int a = 10;
	int b = 20;
	//调用add函数
	int sum = add(a, b);//调用时的a，b称为实际参数，简称实参
	cout << "sum = " << sum << endl; //30

	sum = add(10, 20);
	cout << "sum = " << sum << endl; //30

	swap(a, b); //值传递时，形参是改变不了实参的
	cout << "mian中的 a = " << a << endl;
	cout << "mian中的 b = " << b << endl;

	return 0;
}