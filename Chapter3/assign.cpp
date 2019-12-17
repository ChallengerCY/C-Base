//
// Created by cy on 2019/12/17.
//

#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt=7.2E12;

    //照常输出3
    cout<<"tree = "<<tree<<endl;
    //省略小数点的部分，不会四舍五入
    cout<<"guess = "<<guess<<endl;
    //debt存不下这么大的值，所以转换结果不确定
    cout<<"debt = "<<debt<<endl;
    return 0;
}

/** 本段代码小结
 * c++会根据情况自动执行类型转换。
 * 将一种算数类型的值转换为另一种算数类型的变量时，c++将对值进行转换。
 * 表达式包含不同类型的时候，c++对值进行转换。
 * 将参数传递给函数时，c++将对值进行转换。
 * float转换成int可能会有很大不同，因为首先要省略小数部分(不是四舍五入)，其次float可能比int大得多。
 * 较大的整数转换为较小类型的整数的时候，通常只复制右边的字节。
 * c++11以后提供使用{}列表初始化，可以对赋值进行校验。
 * */



