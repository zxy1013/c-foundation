#include<iostream>
#include <bitset> 
using namespace std;

int main10()
{
    //����ת��
    int a = 35;
    cout << "35��8����:" << std::oct << a << endl;
    cout << "35��10����" << std::dec << a << endl;
    cout << "35��16����:" << std::hex << a << endl;
    cout << "35��2����: " << bitset<32>(a) << endl;      //<32>����ʾ����32λ���


    // & | ~ ^ Ĭ��16�������
    int b = 16;
    cout << "16��2����: " << bitset<32>(b) << endl;
    int c = 1;
    cout << "1��2����: " << bitset<32>(c) << endl;
    int d;
    d = b | c;
    cout << "16 | 1��2����: " << bitset<32>(d) << endl;
    cout << "16 | 1: " << std::dec <<d << endl; //10�������
    d = b & c;
    cout << "16 & 1��2����: " << bitset<32>(d) << endl;
    cout << "16 & 1: " << std::dec << d << endl;
    d = b ^ c;
    cout << "16 ^ 1��2����: " << bitset<32>(d) << endl;
    cout << "16 ^ 1: " << d << endl;
    d = ~b;
    cout << "~16��2����: " << bitset<32>(d) << endl;
    cout << "~16: " << std::dec << d << endl; //-17   17��0...000010001  ȡ�� 1..111101110 ��һ 1..111101111 Ϊ-17
   
    
    //��λ���� << >>
    d = b << 4;
    cout << "16 << 4: " << d << endl;
    cout << "16 << 4 ��2����: " << bitset<32>(d) << endl;
    cout << "16 << 4: " << std::dec <<  d << endl;
    
    b = 16;
    d = b >> 2;
    cout << "16 >> 2: " << std::dec << d << endl;
    
    //ѭ����λ
    unsigned int x = 1968435677;
    int n = sizeof(a) * 8; //n ��ʾ������������ռ��λ��
    int k;//ѭ����λkλ

    cout << "������ѭ����λλ����" << endl;
    cin >> k; //����ѭ����λλ��
    
    /* �ܳ���n��8 16 32��
    ѭ������k (x >> (n - k)) | (x << k);
    ѭ������k (x << (n - k)) | (x >> k); */

    cout << "x ��2����: " << bitset<32>(x) << endl;
    //ѭ������
    b = (x >> (n - k)) | (x << k);
    cout << "x ѭ������ "<<k<<" bit ��2����: " << bitset<32>(b) << endl;

    //ѭ������
    b = (x << (n - k)) | (x >> k);
    cout << "x ѭ������ " << k << " bit ��2����: " << bitset<32>(b) << endl;

    return 0;
}
