#include<iostream>
using namespace std;

//函数常见样式
//1、无参无返
void test01()
{
	int  a = 10; //无参数可以创建变量
	cout << "this is test01 " <<a << endl;
	//test01(); 函数调用
}

//2、有参无返
void test02(int a)
{
	cout << "this is test02" << endl;
	cout << "a = " << a << endl;
	/* 调用 
	int k = 10;
	test02(k);
	*/
}

//3、无参有返
int test03()
{
	cout << "this is test03 " << endl;
	return 10;
	//调用 int s = test03();
}

//4、有参有返
int test04(int a, int b)
{
	cout << "this is test04 " << endl;
	int sum = a + b;
	return sum;
	//int sum = test04(k, k);
}

int main19() {
	test01();
	int k = 10;
	test02(k);
	int s = test03();
	cout << "s = " << s << endl;
	int sum = test04(k, k);
	cout << "sum = " << sum << endl;
	return 0;
}