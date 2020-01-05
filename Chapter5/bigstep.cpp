//
// Created by cy on 2020/1/1.
//

#include <iostream>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    cout<<"Enter an Integer：";
    int by;
    cin>>by;
    cout<<"Counting by "<<by<<"s:\n";
    for (int i = 0; i < 100; i=i+by)
    {
        cout<<i<<endl;
    }
    return 0;
}

/** 本段代码小结
 * 循环更新的地方可以更改步长。
 * 更新表达式可以是任何有效的表达式
 * 检测不等比检测相等要好一点。
 * */

