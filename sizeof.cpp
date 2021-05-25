#include<iostream>
using namespace std;

int main3() {
	short num = 10;
	cout << "short 类型所占内存空间为： " << sizeof(short) << endl; //2
	cout << "num 所占内存空间为： " << sizeof(num) << endl; //2
	cout << "int 类型所占内存空间为： " << sizeof(int) << endl; //4
	cout << "long 类型所占内存空间为： " << sizeof(long) << endl; //4
	cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl; //8
	system("pause");
	return 0;
}