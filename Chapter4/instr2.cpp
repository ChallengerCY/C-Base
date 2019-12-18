//
// Created by cy on 2019/12/18.
//

#include <iostream>

int main()
{
    using namespace std;
    const int ArSize=20;
    char name[ArSize];
    char dessert[ArSize];

    cout<<"Enter your name:\n";
    cin.getline(name,ArSize);
    cout<<"Enter your favorite dessert:\n";
    cin.getline(dessert,ArSize);
    cout<<"I have some delicious "<<dessert;
    cout<<" for you,"<<name<<" .\n";
    return 0;
}

/**本段代码小结
 * 每次读取一个单词不是最好的选择。这时需要使用面向行的读取方式。
 * getline 第二个参数代表要读取的字符数，读取位置是长度-1，最后一位是空字符。通过换行符来确定结尾，但是不保存换行符。在存储字符串时则用空字符代替。
 * */
