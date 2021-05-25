#include<iostream>
using namespace std;

//值传递 不影响实参
void swap2(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//地址传递 影响实参 因为p1 p2保存的是实参 实参是地址
void swap3(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


int main24() {
	//指针和数组
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //指向数组首地址的指针  数组名就是数组首地址
	cout << "下标访问第一个元素： " << arr[0] << endl;
	cout << "指针访问第一个元素： " << *p << endl;
	for (int i = 0; i < 10; i++)
	{
		//利用指针遍历数组
		cout << *p << endl;
		p++; //指针向后偏移四个字节
	}


	//指针和函数
	int a = 10;
	int b = 20;
	swap2(a, b); // 值传递不会改变实参
	cout << "a = " << a << endl;//10
	cout << "b = " << b << endl;//20

	swap3(&a, &b); //地址传递会改变实参
	cout << "a = " << a << endl;//20
	cout << "b = " << b << endl;//10

	system("pause");
	return 0;
}