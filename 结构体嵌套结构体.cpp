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

//��ʦ�ṹ�嶨��
struct teacher
{
	//��Ա�б�
	int id; //ְ�����
	string name;  //��ʦ����
	int age;   //��ʦ����
	struct student stu; //�ӽṹ�� ѧ��
};

int main27() {
	//������ʦ�ṹ�����
	struct teacher t1;
	//��ֵ
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;
	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;
	
	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;
	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ������ " << t1.stu.score << endl;

	system("pause");
	return 0;
}
