//
// Created by cy on 2020/1/7.
//


#include <iostream>
#include <climits>

bool is_int(double);

int main()
{
    using namespace std;
    double num;
    cout<<"Yo,dude!Enter an integer value: ";
    cin>>num;
    while (!is_int(num))
    {
        cout<<"Out of range -- please try again: ";
        cin>>num;
    }

    int val=int (num);
    cout<<"You`ve entered the integer "<<val<<"\nBye\n";
    return 0;
}

bool is_int(double x)
{
    if(x<=INT_MAX&&x>=INT8_MIN)
        return true;
    else
        return false;
}

/**本段代码小结
 * ！非运算符 将表达式的真值取反。
 * 如果给int赋值了一个最大值。很多c++实现会把这个值截短赋值给变量。不会丢失数据。
 * ！运算符的优先级高于所有的关系运算符和算数运算符。
 * */