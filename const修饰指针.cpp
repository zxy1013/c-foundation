#include<iostream>
using namespace std;

int main23() {
	int a = 10;
	int b = 10;

	//const修饰的是指针，常量指针。指针指向地址可以改，指针指向的值不可以更改
	const int* p = &a;
	p = &b; //正确
	//*p = 100;  报错


	//const修饰的是常量，指针常量。指针指向地址不可以改，指针指向的值可以更改
	int* const p1 = &a;
	//p1 = &b; //错误
	*p1 = 100; //正确

	//const既修饰指针又修饰常量，地址和值均不可以改
	const int* const p2 = &a;
	//p2 = &b; //错误
	//*p2 = 100; //错误

	system("pause");
	return 0;
}
