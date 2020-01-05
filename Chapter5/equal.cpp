//
// Created by cy on 2020/1/1.
//

#include <iostream>
int main()
{
    using namespace std;
    int quizscores[10]={20,20,20,20,20,19,20,18,20,20};
    cout<<"Doing it right:\n";
    int i;
    for(i=0;quizscores[i]==20;i++)
        cout<<"quis "<<i<<" is a 20\n";
    cout<<"Doing it dangerously wrong:\n";
    for(i=0;quizscores[i]=20;i++)
    {
        cout<<"quis "<<i<<" is a 20\n";
    }
    return 0;
}

/** 本段代码小结
 * 不要混淆赋值运算符和比较运算符。
 * 第二个中的循环判断表达式会持续赋值，造成无法预估的情况。
 * */