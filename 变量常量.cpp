#include<iostream>
using namespace std;

//1.�곣���Ķ���
#define day 7

int main2() {
	//�����Ķ���
	/*�﷨��
	��������  ������ = ��ʼֵ;
	��������  ������; ������ֵ */
	int a = 10;
	cout << "a = " << a << endl;
	int x;
	x = 10;
	cout << "x" << " = " << x << endl;


	//������ʹ��
	cout << "һ�����ܹ��� " << day << " ��" << endl;
	//day = 8;  //�����곣���������޸� �� = ��: �����������Ϊ��ֵ

	//2.const���α���ҲΪ����
	const int month = 12;
	cout << "һ�����ܹ��� " << month << " ���·�" << endl;
	//month = 24; //���������ǲ������޸ĵ�

	short i = 32768;
	cout << i << endl;
	system("pause");
	return 0;
}