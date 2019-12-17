//
// Created by cy on 2019/12/12.
//

#include <iostream>
int main()
{
    using namespace std;
    float hats,heads;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<"Enter a number";
    cin>>hats;
    cout<<"Enter another number: ";
    cin>>heads;

    cout<<"hats = "<<hats<<"; heads = "<<heads<<endl;
    cout<<"hats + heads = "<<hats+heads<<endl;
    cout<<"hats - heads = "<<hats-heads<<endl;
    cout<<"hats * heads = "<<hats*heads<<endl;
    cout<<"hats / heads = "<<hats/heads<<endl;
    return 0;
}

/**本段代码小结
 * c++ 提供加减乘除求模等五个基本的算数计算。
 * 除法 / 如果两个被除的数都为整数。那么结果的小数部分将被省略。
 * % 求模 除法运算之后的余数。浮点数不能求模会造成编译错误。
 * 如果其中一个数为负数，那么满足下面规则(a/b)*b+a%b=a;
 * 算数运算符遵循通常的代数优先级，先乘除后加减。
 * 当两个运算符的优先级相同的时候，c++根据结合性选择从左到右还是从右到左。
 */