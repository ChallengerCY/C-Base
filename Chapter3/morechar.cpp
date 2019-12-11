//
// Created by cy on 2019/12/11.
//

#include <iostream>

int main()
{
    using namespace std;
    char ch='M';
    int i=ch;
    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;
    cout<<"Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');
    cout<<endl<<"DONE"<<endl;
    return 0;
}

/** 本段代码小结
 * c++的字符字面值存储使用'M'书写；
 * ch实际上是整数，所以可以进行整数相关的操作。
 * 如果在用cin为char赋值5，代码则会先读取字符"5"，然后将其存为ASCII码53存储。int则会读取字符"5"，将其转换为数值5存储。
 * */
