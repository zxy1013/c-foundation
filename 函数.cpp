#include<iostream>
using namespace std;

//��������
//����һ���ӷ�������ʵ����������� 
//����ʱ num1��num2û����ʵ���� ֻ����ʽ���� ���ú���ʱ ʵ�ε�ֵ�ᴫ�ݸ��β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}


//ֵ���� 
//void ����Ҫ����ֵ
void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	//return ; ����������ʱ������Ҫ����ֵ�����Բ�дreturn
}

int main18() {
	int a = 10;
	int b = 20;
	//����add����
	int sum = add(a, b);//����ʱ��a��b��Ϊʵ�ʲ��������ʵ��
	cout << "sum = " << sum << endl; //30

	sum = add(10, 20);
	cout << "sum = " << sum << endl; //30

	swap(a, b); //ֵ����ʱ���β��Ǹı䲻��ʵ�ε�
	cout << "mian�е� a = " << a << endl;
	cout << "mian�е� b = " << b << endl;

	return 0;
}