#include<iostream>
using namespace std;
int main22() {
	//1��ָ��Ķ���
	int a = 10; //�������ͱ���a
	//ָ�붨���﷨�� �������� * ������;
	int* p;
	//ָ�������ֵ
	p = &a; //ָ��ָ�����a�ĵ�ַ
	cout << &a << endl; //��ӡ����a�ĵ�ַ
	cout << p << endl;  //��ӡָ�����p ������a�ĵ�ַ

	//2��ָ���ʹ��
	//ͨ��* ����ָ�����ָ����ڴ����ݣ������ã�*p����ָ��ָ������� pָ��ָ��ĵ�ַ
	cout << "*p = " << *p << endl; //10
	*p = 100; //�޸�
	cout << "*p = " << *p << endl; //100


	//3��ָ����ռ�ڴ�ռ�
	int a1 = 10;
	int* p1 = &a1; //ָ��ָ������a�ĵ�ַ
	cout << *p1 << endl; //* ������ 
	cout << sizeof(p1) << endl; //����windows������ x86 4  x64  8
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;


	//��ָ��
	//ָ�����pָ���ڴ��ַ���Ϊ0�Ŀռ䣬����ָ�������ʼ��
	int* p2 = NULL;
	//���ʿ�ָ�뱨���ڴ���0 ~255Ϊϵͳռ���ڴ棬�������û�����
	// cout << *p2 << endl; //p2 �� nullptr


	//Ұָ��
	//ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
	int* p3 = (int*)0x1100; //(int*)0x1100��ʾ��ַ
	//����Ұָ�뱨�� 
	//cout << *p3 << endl; //�������쳣: ��ȡ����Ȩ�޳�ͻ��

	system("pause");
	return 0;
}
