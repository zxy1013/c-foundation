#include<iostream>
using namespace std;

int main4() {

	float f1 = 3.14f; //不写f 编辑器会默认为double再转换为float
	double d1 = 3.1415926;  //3.14159 默认情况下输出一个小数，会显示出6位有效数字
	cout << f1 << endl;
	cout << d1 << endl;
	cout << "float  size = " << sizeof(f1) << endl; //4
	cout << "double sizeof = " << sizeof(d1) << endl; //8


	//科学计数法
	float f2 = 3e2; // e后面为正数  3 * 10 ^ 2 
	cout << "f2 = " << f2 << endl;//300
	float f3 = 3e-2;  // e后面为负数 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;//0.03

	system("pause");
	return 0;
}
