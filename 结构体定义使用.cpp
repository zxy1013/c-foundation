#include<iostream>
using namespace std;

//�ṹ�嶨�� һЩ���͵ļ���
struct student
{
	//��Ա�б� ����
	string name;  //����
	int age;      //����
	int score;    //����
}stu3; //�ṹ�����������ʽ3 


int main26() {
	//�ṹ�崴������ʱ struct �ؼ��ֿ���ʡ��

	//�ṹ�����������ʽ1
	struct student stu1; 
	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;
	cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;


	//�ṹ�����������ʽ2
	struct student stu2 = { "����",19,60 };
	cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;


	//�ṹ�����������ʽ3��ֵ
	stu3.name = "����";
	stu3.age = 18;
	stu3.score = 80;
	cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl;


	//�ṹ������
	struct student arr[3] =
	{
		{"����",18,80 },
		{"����",19,60 },
		{"����",20,70 }
	};
	//�ı丳ֵ
	arr[1].name ="zz ";
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
	}


	//�ṹ��ָ��
	//�����ṹ�����
	struct student stu = { "����",18,100,};
	//����ָ��ָ��ṹ�����
	struct student* p = &stu;
	//ͨ��->���������Է��ʳ�Ա
	p->score = 80; 
	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

	system("pause");
	return 0;
}
