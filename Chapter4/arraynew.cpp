//
// Created by cy on 2019/12/30.
//

#include <iostream>
int main()
{
    using namespace std;
    double * p3=new double[3];
    p3[0]=0.2;
    p3[1]=0.5;
    p3[2]=0.8;
    cout<<"p3[1] is "<<p3[1]<<".\n";
    p3=p3+1;
    cout<<"Now p3[0] is "<<p3[0]<<" and ";
    cout<<"p3[1] is "<<p3[1]<<".\n";
    p3=p3-1;
    delete[](p3);
    return 0;
}

/**本段代码小结
 * delete 用于释放内存。但不会删除指针ps本身。这里小心内存泄露。只能对new分配的内存使用delete，对空指针使用delete是安全的。
 * 不要使用两个指针指向相同的内存地址。否则有个能造成同一个内存块被释放两次的问题。
 * 在编译时给数组分配称为静态联编。使用new 则是动态联编。
 * new[] 对应delete[]
 * 不能使用sizeof的查看动态数组所包含的字节数。
 * typeName * pointerName=new typeName [num_elements];pointerName将指向第一个元素。
 * c和c++内部都使用指针来处理数组。
 * 对数组指针整体加一 第一位元素是原来的 index为1的元素，以此类推，原来末尾元素暂时无法访问。指针算数有一些特殊的情况
 * */
