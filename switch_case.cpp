#include<iostream>
using namespace std;
int main12() {
	int score = 0;
	cout << "�����Ӱ���" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;  //10 9 ��Ϊ����
		break;
	case 8:
		cout << "�ǳ���" << endl; //8 �ǳ���
		break;
	case 7:
	case 6:
		cout << "һ��" << endl; //7 6 ��Ϊһ��
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}
	system("pause");
	return 0;
}
