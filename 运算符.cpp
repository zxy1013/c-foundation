#include<iostream>
using namespace std;


int main9() {

	/*�Ӽ��˳�*/
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;  //����������������Ȼ������ 3

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl; //0

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; //��������������Ϊ0

	//����С��������� ���Ϊdouble
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl; //2
	cout << sizeof( d1 / d2) << endl; //8


	/*ȡģ*/
	cout << 10 % 3 << endl; //1

	int a4 = 10;
	int b4 = 20;
	cout << a4 % b4 << endl; //10

	int a5 = 10;
	int b5 = 0;
	//cout << a5 % b5 << endl; //ȡģ����ʱ��ģ��Ҳ����Ϊ0

	//����С��������ȡģ
	double d3 = 3.14;
	double d4 = 1.1;
	//cout << d3 % d4 << endl;


	/*����*/
	//���õ���
	int a = 10;
	a++; //�ȼ���a = a + 1
	cout << a << endl; // 11

	//ǰ�õ���
	++a;
	cout << a << endl; // 12

	//����
	//ǰ�õ����ȶԱ�������++���ټ�����ʽ
	int b7 = ++a * 10;
	cout << b7 << endl; //130

	//���õ����ȼ�����ʽ����Ա�������++
	int b8 = a++ * 10;
	cout << b8 << endl;//130

	system("pause");
	return 0;
}
