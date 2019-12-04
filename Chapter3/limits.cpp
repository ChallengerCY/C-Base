//
// Created by CY on 2019/12/4.
//

#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int=INT_MAX;
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LLONG_MAX;

    cout<<"int is "<< sizeof(int)<<" bytes."<<endl;
    cout<<"short is "<< sizeof n_short<<" bytes."<<endl;
    cout<<"long is "<< sizeof n_long<<" bytes."<<endl;
    cout<<"long long is "<< sizeof n_llong<<" bytes."<<endl;
    cout<<endl;

    cout<<"Maximum values:"<<endl;
    cout<<"int: "<<n_int<<endl;
    cout<<"short: "<<n_short<<endl;
    cout<<"long: "<<n_long<<endl;
    cout<<"long long: "<<n_llong<<endl<<endl;

    cout<<"Minimum int value = "<<INT_MIN<<endl;
    cout<<"Bits per byte = "<<CHAR_BIT<<endl;
    return 0;
}

/**本段代码小结
 * 内置的c++类型分为两组：基本类型和复合类型。基本类型是：整数和浮点数。
 * 信息存储有三个步骤：信息存储到哪里。要存储什么值。存储何种类型的信息。
 * 术语宽度(width)用于描述存储整数时使用的内存量。使用的内存越多，越宽。
 * 宽度递增的顺序排列是：char short int long 和long long。
 * char 类型有一些特殊性，常用于表示字符而不是数字。
 * 计算机以位(bit)的单元组成。short至少16位。int至少和short一样长。long至少32位，且至少和int一样长。long long至少64位，且至少与long一样长。
 * 字节(byte)通常指的是8位的内存单元。
 * short 实际上是short int的简称。long实际上是long int的简称。
 * climits头文件存储了关于整型限制的信息。
 * sizeof 运算符指出类型所占的字节。
 * */