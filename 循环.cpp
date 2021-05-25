#include<iostream>
#include<ctime>
using namespace std;
int main13() {
	//while循环
	int num = 0;
	while (num < 10) //循环条件
	{
		cout << "num = " << num << endl;
		num++;
	}
	

	//随机数生成
	//在0-99中产生随机数， 但是因为没有随机种子，所以下一次运行也是这个数，因此就要引出srand
	int num1 = rand() % 100; 
	cout << "num1 = " << num1 << endl;
	
	//srand()可用来设置rand()产生随机数时的随机数种子
	srand((unsigned int)time(NULL));  // 产生随机种子
	cout << "随机数为：" << rand() % 100 << endl;


	//do-while
	int num2 = 0;
	do
	{
		cout << num2 << endl;
		num2++;

	} while (num2 < 10);


	//for
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}


	//嵌套循环
	//外层循环执行1次，内层循环执行1轮
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*" << " "; //不换行
		}
		cout << endl; // 换行
	}


	//9*9乘法表
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << j * i<<"\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
