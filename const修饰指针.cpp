#include<iostream>
using namespace std;

int main23() {
	int a = 10;
	int b = 10;

	//const���ε���ָ�룬����ָ�롣ָ��ָ���ַ���Ըģ�ָ��ָ���ֵ�����Ը���
	const int* p = &a;
	p = &b; //��ȷ
	//*p = 100;  ����


	//const���ε��ǳ�����ָ�볣����ָ��ָ���ַ�����Ըģ�ָ��ָ���ֵ���Ը���
	int* const p1 = &a;
	//p1 = &b; //����
	*p1 = 100; //��ȷ

	//const������ָ�������γ�������ַ��ֵ�������Ը�
	const int* const p2 = &a;
	//p2 = &b; //����
	//*p2 = 100; //����

	system("pause");
	return 0;
}
