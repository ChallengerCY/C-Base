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
    cin>>name;
    cout<<"Enter your favorite dessert:\n";
    cin>>dessert;
    cout<<"I have some delicious "<<dessert;
    cout<<" for you,"<<name<<" .\n";
    return 0;

}

/** 本段代码小结
 * 如果字符数组中在未结束之前包含空字符，那么代表字符串到这里结束。
 * cin通过判断空字符来结束输入指令。这意味着cin在读取字符数组的时候只会读取一个单词。
 * 本例中不能防止用户输入字符数超过字符数组长度的问题。
 * */
