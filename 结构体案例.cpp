#include<iostream>
#include <ctime>
using namespace std; //29

//设计学生和老师的结构体
struct Student
{
	string name;
	int score;
};
struct Teacher
{
	string name;
	Student sArray[5];
};

//给每个老师及所带的学生赋值，结构体数组地址传递时形参不加*
void allocateSpace(struct Teacher tArray[], int len)//struct Teacher tArray[] 也可以写为struct Teacher* tArray 
{
	string tName = "教师";
	string sName = "学生";
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = tName + nameSeed[i];

		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = sName + nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void printTeachers(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main() {

	srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>

	struct Teacher tArray[3]; //老师数组
	int len = sizeof(tArray) / sizeof(Teacher); //数组长度

	//通过函数给每个老师及所带的学生赋值
	allocateSpace(tArray, len);//传地址

	//打印数据
	printTeachers(tArray, len); 

	system("pause");
	return 0;
}
