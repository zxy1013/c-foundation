#include<iostream>
using namespace std;
int main16() {
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int end = sizeof(arr) / sizeof(arr[0])-1; //����Ԫ�ظ���-1

	//��������
	int z = 0;
	for (int i = 0; i < end; i++) {
		z = arr[i];
		arr[i] = arr[end];
		arr[end] = z;
		end--;
	}
	//������õ�����
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}

	
	//ð������
	for (int i = 0; i < end; i++)
	{
		for (int j = 0; j < end - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//�������õ�����
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}
