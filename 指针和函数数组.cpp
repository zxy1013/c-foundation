#include<iostream>
using namespace std;

//ֵ���� ��Ӱ��ʵ��
void swap2(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//��ַ���� Ӱ��ʵ�� ��Ϊp1 p2�������ʵ�� ʵ���ǵ�ַ
void swap3(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


int main24() {
	//ָ�������
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;  //ָ�������׵�ַ��ָ��  ���������������׵�ַ
	cout << "�±���ʵ�һ��Ԫ�أ� " << arr[0] << endl;
	cout << "ָ����ʵ�һ��Ԫ�أ� " << *p << endl;
	for (int i = 0; i < 10; i++)
	{
		//����ָ���������
		cout << *p << endl;
		p++; //ָ�����ƫ���ĸ��ֽ�
	}


	//ָ��ͺ���
	int a = 10;
	int b = 20;
	swap2(a, b); // ֵ���ݲ���ı�ʵ��
	cout << "a = " << a << endl;//10
	cout << "b = " << b << endl;//20

	swap3(&a, &b); //��ַ���ݻ�ı�ʵ��
	cout << "a = " << a << endl;//20
	cout << "b = " << b << endl;//10

	system("pause");
	return 0;
}