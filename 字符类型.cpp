#include<iostream>
using namespace std;

int main5() {
	// 创建时使用单引号
	char ch = 'a';
	cout << ch << endl; 
	cout << sizeof(char) << endl; //1

	// 常见错误
	//ch = "abcde"; //错误，不可以用双引号
	//ch = 'abcde'; //错误，单引号内只能引用一个字符

	// 对应ascii码值
	cout << (int)ch << endl; //强转为整型 97
	
	char c;
	c = 65; //可以直接用ASCII给字符型变量赋值
	cout << c << endl; //A


	cout << "hello" <<endl; //输出后换行
	cout << "hello"; //不换行
	cout << "hello\n"; //换行

	cout << "\\" << endl; //输出\
	cout << "\tHello" << endl;
	cout << "\n" << endl;

	system("pause");
	return 0;
}
