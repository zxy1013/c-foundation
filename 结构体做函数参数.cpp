#include<iostream>
using namespace std;

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//ֵ����
void printStudent(student stu)
{
	stu.age = 28;
	cout << "ֵ���ݺ����� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
}

//��ַ����
void printStudent2(student* stu)
{
	stu->age = 28;
	cout << "��ַ���ݺ����� ������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << endl;
}

//constʹ�ó��� �������е��βθ�Ϊָ�� ���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µ��ڴ棬���ǿ��ܻ����޸ģ�������Ҫconst����
void printStudent3(const student* stu) //��const��ֹ�������е������
{
	//stu->age = 100; //������Ϊ����const����
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;

}

int main28() {
	student stu = { "����",18,100 };
	//ֵ����
	printStudent(stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
	cout << endl;

	//��ַ����
	printStudent2(&stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
	
	//constʹ�ó���
	printStudent3(&stu);

	system("pause");
	return 0;
}