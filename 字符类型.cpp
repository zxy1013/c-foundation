#include<iostream>
using namespace std;

int main5() {
	// ����ʱʹ�õ�����
	char ch = 'a';
	cout << ch << endl; 
	cout << sizeof(char) << endl; //1

	// ��������
	//ch = "abcde"; //���󣬲�������˫����
	//ch = 'abcde'; //���󣬵�������ֻ������һ���ַ�

	// ��Ӧascii��ֵ
	cout << (int)ch << endl; //ǿתΪ���� 97
	
	char c;
	c = 65; //����ֱ����ASCII���ַ��ͱ�����ֵ
	cout << c << endl; //A


	cout << "hello" <<endl; //�������
	cout << "hello"; //������
	cout << "hello\n"; //����

	cout << "\\" << endl; //���\
	cout << "\tHello" << endl;
	cout << "\n" << endl;

	system("pause");
	return 0;
}
