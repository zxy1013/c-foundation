#include<iostream>
using namespace std;

//声明可以写多次，定义只能一次
//函数声明 若函数定义在main之后，就需要函数声明 否则会报错找不到函数
int max(int a, int b);
int max(int a, int b);

int main20() {
	int a = 100;
	int b = 200;
	cout << max(a, b) << endl;
	cout << sizeof(max(a, b)) << endl;

	system("pause");
	return 0;
}

//函数定义
int max(int a, int b)
{
	return a > b ? a : b;
}