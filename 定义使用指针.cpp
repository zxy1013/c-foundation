#include<iostream>
using namespace std;
int main22() {
	//1、指针的定义
	int a = 10; //定义整型变量a
	//指针定义语法： 数据类型 * 变量名;
	int* p;
	//指针变量赋值
	p = &a; //指针指向变量a的地址
	cout << &a << endl; //打印数据a的地址
	cout << p << endl;  //打印指针变量p 即数据a的地址

	//2、指针的使用
	//通过* 操作指针变量指向的内存数据，解引用，*p操作指针指向的数据 p指针指向的地址
	cout << "*p = " << *p << endl; //10
	*p = 100; //修改
	cout << "*p = " << *p << endl; //100


	//3、指针所占内存空间
	int a1 = 10;
	int* p1 = &a1; //指针指向数据a的地址
	cout << *p1 << endl; //* 解引用 
	cout << sizeof(p1) << endl; //本地windows调试器 x86 4  x64  8
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;


	//空指针
	//指针变量p指向内存地址编号为0的空间，用于指针变量初始化
	int* p2 = NULL;
	//访问空指针报错。内存编号0 ~255为系统占用内存，不允许用户访问
	// cout << *p2 << endl; //p2 是 nullptr


	//野指针
	//指针变量p指向内存地址编号为0x1100的空间
	int* p3 = (int*)0x1100; //(int*)0x1100表示地址
	//访问野指针报错 
	//cout << *p3 << endl; //引发了异常: 读取访问权限冲突。

	system("pause");
	return 0;
}
