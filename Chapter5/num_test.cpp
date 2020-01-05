//
// Created by cy on 2020/1/1.
//

#include <iostream>
int main()
{
    using namespace std;
    cout<<"Enter the starting countdown value: ";
    int limit;
    cin>>limit;
    int i;
    for(i=limit;i;i--)
        cout<<"i = "<<i<<"\n";
    cout<<"Down now that i = "<<i<<"\n";
    return 0;
}

/**本段代码小结
 * 循环只执行一次初始化。
 * 循环检测的部分可以使用任意表达式，c++会将结果转换为bool 这里到0停止就是因为 0 代表false；
 * for 循环是入口条件，意味着每次循环之前都会计算表达式的值。
 * for很像函数调用，但是他是c++的保留关键字，这还将防止将函数名命名成for。
 */