#include<iostream>
using namespace std;

//1.宏常量的定义
#define day 7

int main2() {
	//变量的定义
	/*语法：
	数据类型  变量名 = 初始值;
	数据类型  变量名; 后续赋值 */
	int a = 10;
	cout << "a = " << a << endl;
	int x;
	x = 10;
	cout << "x" << " = " << x << endl;


	//常量的使用
	cout << "一周里总共有 " << day << " 天" << endl;
	//day = 8;  //报错，宏常量不可以修改 “ = ”: 左操作数必须为左值

	//2.const修饰变量也为常量
	const int month = 12;
	cout << "一年里总共有 " << month << " 个月份" << endl;
	//month = 24; //报错，常量是不可以修改的

	short i = 32768;
	cout << i << endl;
	system("pause");
	return 0;
}