#include<iostream>
using namespace std;

int main4() {

	float f1 = 3.14f; //��дf �༭����Ĭ��Ϊdouble��ת��Ϊfloat
	double d1 = 3.1415926;  //3.14159 Ĭ����������һ��С��������ʾ��6λ��Ч����
	cout << f1 << endl;
	cout << d1 << endl;
	cout << "float  size = " << sizeof(f1) << endl; //4
	cout << "double sizeof = " << sizeof(d1) << endl; //8


	//��ѧ������
	float f2 = 3e2; // e����Ϊ����  3 * 10 ^ 2 
	cout << "f2 = " << f2 << endl;//300
	float f3 = 3e-2;  // e����Ϊ���� 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;//0.03

	system("pause");
	return 0;
}
