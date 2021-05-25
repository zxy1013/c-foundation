#include<iostream>
using namespace std;

int main11() {
	int a = 10;
	int b = 20;
	int c = 0;
	c = a > b ? a : b; //将大的那个赋值给c
	cout << "c = " << c << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//C++中三目运算符返回的变量可以继续赋值
	(a > b ? a : b) = 100; //b = 100
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}