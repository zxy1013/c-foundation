#include<iostream>
using namespace std;


//冒泡排序函数
void bubbleSort(int* arr, int len)  //int * arr 也可以写为int arr[]
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印数组函数
void printArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main25() {
	//创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(int);
	//调用冒泡排序函数 一般对数组操作时 需要传入数组长度
	bubbleSort(arr, len);//传地址
	//输出数组
	printArray(arr, len);

	system("pause");
	return 0;
}
