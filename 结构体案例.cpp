#include<iostream>
#include <ctime>
using namespace std; //29

//���ѧ������ʦ�Ľṹ��
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

//��ÿ����ʦ��������ѧ����ֵ���ṹ�������ַ����ʱ�ββ���*
void allocateSpace(struct Teacher tArray[], int len)//struct Teacher tArray[] Ҳ����дΪstruct Teacher* tArray 
{
	string tName = "��ʦ";
	string sName = "ѧ��";
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
			cout << "\t������" << tArray[i].sArray[j].name << " ������" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main() {

	srand((unsigned int)time(NULL)); //��������� ͷ�ļ� #include <ctime>

	struct Teacher tArray[3]; //��ʦ����
	int len = sizeof(tArray) / sizeof(Teacher); //���鳤��

	//ͨ��������ÿ����ʦ��������ѧ����ֵ
	allocateSpace(tArray, len);//����ַ

	//��ӡ����
	printTeachers(tArray, len); 

	system("pause");
	return 0;
}
