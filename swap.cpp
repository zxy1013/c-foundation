//swap.cpp文件
//在源文件中写函数的定义
#include "swap.h" //双引号表示自定义。include表示关联cpp和h文件

void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}