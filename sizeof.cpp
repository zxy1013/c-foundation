#include<iostream>
using namespace std;

int main3() {
	short num = 10;
	cout << "short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << endl; //2
	cout << "num ��ռ�ڴ�ռ�Ϊ�� " << sizeof(num) << endl; //2
	cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl; //4
	cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl; //4
	cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl; //8
	system("pause");
	return 0;
}