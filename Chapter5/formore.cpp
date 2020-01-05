//
// Created by cy on 2020/1/1.
//

#include <iostream>
const int ArSize=16;
int main()
{
    long long factorials[ArSize];
    factorials[1]=factorials[0]=1LL;
    for(int i=2;i<ArSize;i++)
        factorials[i]=i*factorials[i-1];
    for (int i=0;i<ArSize;i++)
        std::cout<<i<<"! = "<<factorials[i]<<std::endl;
    return 0;
}

/** 本段代码小结
 * 阶乘运算。阶乘即 0！=1，1！=1，2！=2*1! 3!=3*2!。以此类推
 * */

