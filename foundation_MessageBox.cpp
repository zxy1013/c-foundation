#include<windows.h>
#include<iostream>
using namespace std;

int main1(void) {
	int x;
	x = MessageBox(GetForegroundWindow(), TEXT("Hello_Word!"), TEXT("�����ҵĵ�һ������"), 1);
	cout << "���ⵯ��Ŷ��" << endl;
	cout << x;
	return 0;
}