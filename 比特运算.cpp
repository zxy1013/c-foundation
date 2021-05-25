#include<iostream>
#include <bitset> 
using namespace std;

int main10()
{
    //进制转换
    int a = 35;
    cout << "35的8进制:" << std::oct << a << endl;
    cout << "35的10进制" << std::dec << a << endl;
    cout << "35的16进制:" << std::hex << a << endl;
    cout << "35的2进制: " << bitset<32>(a) << endl;      //<32>：表示保留32位输出


    // & | ~ ^ 默认16进制输出
    int b = 16;
    cout << "16的2进制: " << bitset<32>(b) << endl;
    int c = 1;
    cout << "1的2进制: " << bitset<32>(c) << endl;
    int d;
    d = b | c;
    cout << "16 | 1的2进制: " << bitset<32>(d) << endl;
    cout << "16 | 1: " << std::dec <<d << endl; //10进制输出
    d = b & c;
    cout << "16 & 1的2进制: " << bitset<32>(d) << endl;
    cout << "16 & 1: " << std::dec << d << endl;
    d = b ^ c;
    cout << "16 ^ 1的2进制: " << bitset<32>(d) << endl;
    cout << "16 ^ 1: " << d << endl;
    d = ~b;
    cout << "~16的2进制: " << bitset<32>(d) << endl;
    cout << "~16: " << std::dec << d << endl; //-17   17：0...000010001  取反 1..111101110 加一 1..111101111 为-17
   
    
    //移位运算 << >>
    d = b << 4;
    cout << "16 << 4: " << d << endl;
    cout << "16 << 4 的2进制: " << bitset<32>(d) << endl;
    cout << "16 << 4: " << std::dec <<  d << endl;
    
    b = 16;
    d = b >> 2;
    cout << "16 >> 2: " << std::dec << d << endl;
    
    //循环移位
    unsigned int x = 1968435677;
    int n = sizeof(a) * 8; //n 表示该数二进制所占的位数
    int k;//循环移位k位

    cout << "请输入循环移位位数：" << endl;
    cin >> k; //输入循环移位位数
    
    /* 总长度n（8 16 32）
    循环左移k (x >> (n - k)) | (x << k);
    循环右移k (x << (n - k)) | (x >> k); */

    cout << "x 的2进制: " << bitset<32>(x) << endl;
    //循环左移
    b = (x >> (n - k)) | (x << k);
    cout << "x 循环左移 "<<k<<" bit 的2进制: " << bitset<32>(b) << endl;

    //循环右移
    b = (x << (n - k)) | (x >> k);
    cout << "x 循环右移 " << k << " bit 的2进制: " << bitset<32>(b) << endl;

    return 0;
}
