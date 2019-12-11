//
// Created by cy on 2019/12/11.
//

#include <iostream>

int main()
{
    using namespace std;
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    cout<<"Hola ";
    cout<<"Thank you for the "<<ch<<" character."<<endl;

    return 0;

}

/** 本段代码小结
 * 编程语言通过使用字母的数值编码来存储字符。
 * char是另一种整型。足够长，可以表示计算机系统中的基本符号(大多不超过128位)。
 * char可以被比作比short还短的类型。
 * 在美国最常用的符号集是ASCII。IBM大型机用的是EBCDIC编码。
 * c++还提供wchat_t来存储更多的值。
 * 这里cin将字符转成数值编码，cout将数值编码转换成字符。
 * cin和cout行为是由变量引导的。
 * */
