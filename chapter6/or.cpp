//
// Created by cy on 2020/1/6.
//

#include <iostream>
int main()
{
    using namespace std;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
        cout<<"You were warned!\a\a\n";
    else if (ch=='n'||ch=='N')
        cout<<"A wise choice... bye\n";
    else
        cout<<"That wasn`t a y or n!";
    return 0;
}

/** 本段代码小结
 * 逻辑运算符||
 * 当两个条件中有一个或者全部满足的时候，可以用or来描述。
 * 逻辑运算符比关系运算符优先级低。
 * 如果第一个表达式为true 则不会进行后续的检测。
 * */
