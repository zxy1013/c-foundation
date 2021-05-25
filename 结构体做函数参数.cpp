#include<iostream>
using namespace std;

//学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//值传递
void printStudent(student stu)
{
	stu.age = 28;
	cout << "值传递函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
}

//地址传递
void printStudent2(student* stu)
{
	stu->age = 28;
	cout << "地址传递函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
}

//const使用场景 将函数中的形参改为指针 可以减少内存空间，而且不会复制新的内存，但是可能会误修改，所以需要const修饰
void printStudent3(const student* stu) //加const防止函数体中的误操作
{
	//stu->age = 100; //报错，因为加了const修饰
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}

int main28() {
	student stu = { "张三",18,100 };
	//值传递
	printStudent(stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
	cout << endl;

	//地址传递
	printStudent2(&stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
	
	//const使用场景
	printStudent3(&stu);

	system("pause");
	return 0;
}