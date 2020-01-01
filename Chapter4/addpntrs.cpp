//
// Created by cy on 2019/12/30.
//

#include <iostream>
int main()
{
    using namespace std;
    double wages[3]={10000.0,20000.0,30000.0};
    short stacks[3]={3,2,1};

    double * pw=wages;
    short * ps=&stacks[0];

    cout<<"pw = "<<pw <<", *pw = "<<*pw<<endl;
    pw=pw+1;
    cout<<"add 1 to the pw pointer:\n";
    cout<<"pw = "<<pw <<", *pw = "<<*pw<<"\n\n";
    cout<<"ps = "<<ps <<", *ps = "<<*ps<<endl;
    ps=ps+1;
    cout<<"add 1 to the pw pointer:\n";
    cout<<"ps = "<<ps <<", *ps = "<<*ps<<"\n\n";
    cout<<"access two elements with array notation\n";
    cout<<"stacks[0] = "<<stacks[0]<<", stacks[1] = "<<stacks[1]<<endl;
    cout<<"access two elements with array notation\n";
    cout<<"*stacks = "<<*stacks<<", *(stacks+1) = "<<*(stacks+1)<<endl;

    cout<< sizeof(wages)<<" = size of wages array\n";
    cout<< sizeof(pw)<<" = size of pw pointer\n";
    return 0;
}

/**本段代码小结
 * 对指针变量加一之后，增加量等于它指向的类型字节数。
 * c++将数组名解释为地址，多数情况下解释为数组第一个元素的地址。
 * wages=wages[0]=address of first element of array。
 * arrayname[i] becomes *(arrayname+1)
 * pointername[i] becomes *(pointername+1)
 * pointername=pointername+1
 * arrayname=arrayname+1 不合法 因为数组名是常量。
 * sizeof对于数组是数组的长度，对指针则是指针的长度。
 * 将一个指针减去另一个指针可以获取到一个整数的差值。将会等到两个元素的差值。仅当两个指针指向同一个数组时有效。
 * */

