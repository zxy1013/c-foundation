#include<iostream>
using namespace std;

int main14() {
	cout << "1" << endl;
	goto FLAG; // ȥ��FLAG��ǵ�λ�ü���ִ��
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
FLAG: // ���ñ��
	cout << "5" << endl; //���1 5 

	system("pause");
	return 0;
}
