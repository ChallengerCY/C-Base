//
// Created by cy on 2019/12/30.
//

#include <iostream>

int main()
{
    using namespace std;
    int donuts=6;
    double cups=4.52;

    cout<<"dounts value= "<<donuts;
    cout<<" and donuts address = "<<&donuts<<endl;

    cout<<"cups value = "<<cups;
    cout<<" and donuts address = "<<&cups<<endl;
}

/**本段代码小结
 * 在变量前使用&取地址运算符来获取变量的地址。
 * 地址以十六进制形式出现。
 * 值是指定的量，地址位派生量。
 * oop强调在运行时而不是编译阶段进行决策，比如数组动态的创建长度大小可以避免空间浪费。
 */
