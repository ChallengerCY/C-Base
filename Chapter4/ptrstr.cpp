//
// Created by cy on 2019/12/30.
//

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char animal[20]="bear";
    const char * bird="wren";

    char * ps;
    cout<<animal<<" and ";
    cout<<bird<<"\n";
    cout<<"Enter a kina of animal: ";
    cin>>animal;
    ps=animal;
    cout<<ps<<"!\n";
    cout<<"Before using strcpy():\n";
    cout<<animal<<" at "<<(int *)animal<<endl;
    cout<<ps <<" at "<<(int *)ps<<endl;
    ps=new char[strlen(animal)+1];
    strcpy(ps,animal);
    cout<<"After using strcpy():\n";
    cout<<animal<<" at "<<(int *)animal<<endl;
    cout<<ps <<" at "<<(int *)ps<<endl;
    delete[](ps);
    return 0;
}

/**本段代码小结
 * cout会打印字符数组中第一个地址的值，然后知道遇到空字符停止。""包围起来的字符串默认也是地址。与逐个传递字符串中所有的字符相比，这样的工作量比较少。
 * char数组名，char指针，和""代表的字符串常量都被解释为字符串的第一个地址。
 * 编译器会在内存中流出一部分空间，用于存储源代码中所有用引号括起的字符串。
 * c++不能保证字符串字面值被唯一地存储。比如多处引用了"warn"，可能存储一个，也可能存储多个。
 * ps=animal 只是将地址复制过来，两者指向的内存单元相同。浅拷贝。
 * 数组初始化的时候使用=运算，否则应该使用strcpy或者strncpy。
 * strcpy如果遇到目标大小小于数据大小的时候，多出的数据会被存储在目标数组后面的内存单元，这样会存在其他单元被覆盖的问题。
 * strncpy可以指定要复制的长度。如果在达到字符串结尾之前内存已经没有了，则应该手动添加空字符结束字符串，因为此时并不会主动添加空字符串。
 * */

