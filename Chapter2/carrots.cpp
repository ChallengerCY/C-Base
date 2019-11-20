//
// Created by 成宇 on 2019/11/18.
//
#include <iostream>
int main()
{
    using namespace std;

    int carrots;

    carrots=25;
    cout<<"I have ";
    cout<<carrots;
    cout<<" carrots";
    cout<<endl;
    carrots=carrots-1;
    cout<<"Crunch, crunch. Now I have "<<carrots<<" carrots"<<endl;
    return 0;
}

/** 本段代码小结
 * 要将信息存储在计算机中，必须明确地指出信息的存储位置和所需的内存空间
 * int carrots 指出了需要的内存和该存储单元的名称。编译器负责分配和标记内存细节。
 * 对于声明变量，c++的做法是尽可能在首次使用前声明它。
 * 赋值从左到右进行。
 * carrots=25 计算机不是单独的存储每个数字，而是将25转换为二进制数。
 * */

