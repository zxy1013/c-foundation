#include<windows.h>
#include<iostream>
using namespace std;

int main1(void) {
	int x;
	x = MessageBox(GetForegroundWindow(), TEXT("Hello_Word!"), TEXT("这是我的第一个程序"), 1);
	cout << "留意弹窗哦！" << endl;
	cout << x;
	return 0;
}