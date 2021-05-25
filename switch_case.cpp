#include<iostream>
using namespace std;
int main12() {
	int score = 0;
	cout << "请给电影打分" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;  //10 9 都为经典
		break;
	case 8:
		cout << "非常好" << endl; //8 非常好
		break;
	case 7:
	case 6:
		cout << "一般" << endl; //7 6 都为一般
		break;
	default:
		cout << "烂片" << endl;
		break;
	}
	system("pause");
	return 0;
}
