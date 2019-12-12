//
// Created by cy on 2019/12/12.
//

#include <iostream>
int main()
{
    using namespace std;
    float a=2.34E+22f;
    float b=a+1.0f;

    cout<<"a= "<<a<<endl;
    cout<<"b-a = "<<b-a<<endl;
    return 0;
}

/** 本段代码小结
 * 浮点常量 f F结尾的代表float，l L代表long double
 * 本例的重点是2.34E+22f是一个小数点左边有23位的数字。+1是对第23位进行修改，而float只能表示数字中的前6位或者第7位。，所以结果位0
 * */

