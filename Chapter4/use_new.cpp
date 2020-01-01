//
// Created by cy on 2019/12/30.
//

#include <iostream>
int main()
{
    using namespace std;
    int nights=1001;
    int * pt=new int;
    *pt=1001;
    cout<<"nights value =";
    cout<<"nights << location "<<&nights;
    cout<<"int ";
    cout<<"value = "<<*pt<<": location= "<<pt<<endl;
    double * pd = new double;
    *pd=10000001.0;
    cout<<"double";
    cout<<"value = "<<*pd<<": location = "<<pd<<endl;
    cout<<"location of pointer pd: "<<&pd<<endl;
    cout<<"size of pt = "<< sizeof(pt);
    cout<<" size of *pt = "<< sizeof(*pt)<<endl;
    cout<<"size of pd = "<< sizeof(pd);
    cout<<" size of *pd = "<< sizeof(*pd)<<endl;
    return 0;
}

/**本段代码小结
 * 指针在运行阶段分配未命名的内存以存储值。
 * new 将找到一个正确的内存块，并返回该内存块的地址。
 * new 根据类型来确定需要多少字节内存。
 * typeName * poniter_name = new typeName;
 * 使用new声明的指针通常是从堆中获自由存储区域的内存区域分配。而常规声明的变量内存地址来源于栈。
 * c++提供了检测内存分配失败的工具
 * 内存被耗尽，使用new时会返回空指针或者0
 * */

