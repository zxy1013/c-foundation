#include<iostream>
using namespace std;

int main8() {
	//��������
	int a = 0;
	cout << "���������ͱ�����" << endl;
	cin >> a;
	cout <<"���ͱ���Ϊ��"<< a << endl;

	//����������
	double d = 0;
	cout << "�����븡���ͱ�����" << endl;
	cin >> d;
	cout << d << endl;

	//�ַ�������
	char ch = 0;
	cout << "�������ַ��ͱ�����" << endl;
	cin >> ch;
	cout << ch << endl;

	//�ַ���������
	string str;
	cout << "�������ַ����ͱ�����" << endl;
	cin >> str;
	cout << str << endl;

	//������������
	bool flag = true;
	cout << "�����벼���ͱ�����" << endl; //ֻҪΪ��0���� �����Ϊ1
	cin >> flag;
	cout << flag << endl;

	system("pause");
	return EXIT_SUCCESS;
}
