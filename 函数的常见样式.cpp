#include<iostream>
using namespace std;

//����������ʽ
//1���޲��޷�
void test01()
{
	int  a = 10; //�޲������Դ�������
	cout << "this is test01 " <<a << endl;
	//test01(); ��������
}

//2���в��޷�
void test02(int a)
{
	cout << "this is test02" << endl;
	cout << "a = " << a << endl;
	/* ���� 
	int k = 10;
	test02(k);
	*/
}

//3���޲��з�
int test03()
{
	cout << "this is test03 " << endl;
	return 10;
	//���� int s = test03();
}

//4���в��з�
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