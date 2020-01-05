//
// Created by cy on 2020/1/1.
//
#include <iostream>
int main()
{
    using namespace std;
    int x;
    cout<<"The expression x=100 has the value ";
    cout<<(x=100)<<endl;
    cout<<"Now x = "<<x<<endl;
    cout<<"The expression x<3 has the value ";
    cout<<(x<3)<<endl;
    cout<<"The expression x>3 has the value ";
    cout<<(x>3)<<endl;
    cout.setf(ios_base::boolalpha);
    cout<<"The expression x<3 has the value ";
    cout<<(x<3)<<endl;
    cout<<"The expression x>3 has the value ";
    cout<<(x>3)<<endl;
    return 0;
}

/**本段代码小结
 * ios_base::boolalpha 指定bool值输出。
 * 通常 cout在显示bool值前 将它们转换为int。
 * 当判定表达式的操作改变了内存中存储的数据时，这个表达式就有副作用。
 * 从表达式转变为语句只需要在表达式后面加一个分号。
 * */