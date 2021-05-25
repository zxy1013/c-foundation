#include<iostream>
using namespace std;


int main9() {

	/*加减乘除*/
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;  //两个整数相除结果依然是整数 3

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl; //0

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; //报错，除数不可以为0

	//两个小数可以相除 结果为double
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl; //2
	cout << sizeof( d1 / d2) << endl; //8


	/*取模*/
	cout << 10 % 3 << endl; //1

	int a4 = 10;
	int b4 = 20;
	cout << a4 % b4 << endl; //10

	int a5 = 10;
	int b5 = 0;
	//cout << a5 % b5 << endl; //取模运算时，模数也不能为0

	//两个小数不可以取模
	double d3 = 3.14;
	double d4 = 1.1;
	//cout << d3 % d4 << endl;


	/*递增*/
	//后置递增
	int a = 10;
	a++; //等价于a = a + 1
	cout << a << endl; // 11

	//前置递增
	++a;
	cout << a << endl; // 12

	//区别
	//前置递增先对变量进行++，再计算表达式
	int b7 = ++a * 10;
	cout << b7 << endl; //130

	//后置递增先计算表达式，后对变量进行++
	int b8 = a++ * 10;
	cout << b8 << endl;//130

	system("pause");
	return 0;
}
