#include<iostream>
using namespace std;

//��������д��Σ�����ֻ��һ��
//�������� ������������main֮�󣬾���Ҫ�������� ����ᱨ���Ҳ�������
int max(int a, int b);
int max(int a, int b);

int main20() {
	int a = 100;
	int b = 200;
	cout << max(a, b) << endl;
	cout << sizeof(max(a, b)) << endl;

	system("pause");
	return 0;
}

//��������
int max(int a, int b)
{
	return a > b ? a : b;
}