#include<iostream>
using namespace std;

int main14() {
	cout << "1" << endl;
	goto FLAG; // 去到FLAG标记的位置继续执行
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
FLAG: // 设置标记
	cout << "5" << endl; //输出1 5 

	system("pause");
	return 0;
}
