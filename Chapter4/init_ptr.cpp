//
// Created by cy on 2019/12/30.
//

#include <iostream>
int main()
{
    using namespace std;
    int higgens=5;
    int * pt=&higgens;
    cout<<"Values of higgens = "<<higgens;
    cout<<"; Address of higgens = "<<&higgens<<endl;

    cout<<"Values of *pt= "<<*pt;
    cout<<"; Address of pt "<<pt<<endl;
}

/** 本段代码小结
 * 指针声明必须指定指针的类型
 * c++中指针是复合类型
 * 指针变量不仅仅是指针，而且是指向特定类型的指针
 * 地址需要2个还是4个字节存储取决于计算机系统
 * 两个指向不同类型的指针本身长度是相同的。比如char地址和double地址的长度相同。
 * 在声明语句中初始化指针，被初始化的是指针，而不是他指向的值。
 * 一定要对指针应用解除*之前，确保将指针指向一个确定的适当的值。
 * 两个地址相加没有意义。也不能简单的将整数赋值给指针，应该使用强制类型转换。0xB8000000 是老式计算机系统中视频内存的组合段偏移地址。
 */
