#include<iostream>
#include<ctime>
using namespace std;
int main13() {
	//whileѭ��
	int num = 0;
	while (num < 10) //ѭ������
	{
		cout << "num = " << num << endl;
		num++;
	}
	

	//���������
	//��0-99�в���������� ������Ϊû��������ӣ�������һ������Ҳ�����������˾�Ҫ����srand
	int num1 = rand() % 100; 
	cout << "num1 = " << num1 << endl;
	
	//srand()����������rand()���������ʱ�����������
	srand((unsigned int)time(NULL));  // �����������
	cout << "�����Ϊ��" << rand() % 100 << endl;


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


	//Ƕ��ѭ��
	//���ѭ��ִ��1�Σ��ڲ�ѭ��ִ��1��
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*" << " "; //������
		}
		cout << endl; // ����
	}


	//9*9�˷���
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << j * i<<"\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
