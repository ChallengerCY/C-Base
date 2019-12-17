//
// Created by cy on 2019/12/17.
//

#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<"Integer division : 9/5 = "<<9/5<<endl;
    cout<<"FLoating-point division: 9.0/5.0 = ";
    cout<<9.0/5.0<<endl;
    cout<<"Mixed division : 9.0/5 = "<<9.0/5<<endl;
    cout<<"double division : 9.0/5 = ";
    cout<<1.e7/9.0<<endl;
    cout<<"float constants: 1e7f/9.0f = ";
    cout<<1.e7f/9.0f<<endl;
    return 0;
}

/** 本段代码小结
 * c++在运算的时候，将会把他们全部转换为同一类型。
 * 浮点常量默认情况下是double类型。
 * */

