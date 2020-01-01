//
// Created by cy on 2019/12/30.
//

#include <iostream>
#include <vector>
#include <array>

int main()
{
    using namespace std;
    double a1[4]={1.2,2.4,3.6,4.8};
    vector<double> a2(4);
    a2[0]=1.0/3.0;
    a2[1]=1.0/3.0;
    a2[2]=1.0/3.0;
    a2[3]=1.0/3.0;
    array<double,4> a3={3.14,2.72,1.62,1.41};
    array<double ,4> a4;
    a4=a3;
    cout<<"a1[2]: "<<a1[2]<<" at "<<&a1[2]<<endl;
    cout<<"a2[2]: "<<a2[2]<<" at "<<&a1[2]<<endl;
    cout<<"a3[2]: "<<a3[2]<<" at "<<&a1[2]<<endl;
    cout<<"a4[2]: "<<a4[2]<<" at "<<&a1[2]<<endl;

    a1[-2]=20.2;

    cout<<"a1[-2]: "<<a1[2]<<" at "<<&a1[-2]<<endl;
    cout<<"a2[2]: "<<a3[2]<<" at "<<&a3[2]<<endl;
    cout<<"a3[2]: "<<a4[2]<<" at "<<&a4[2]<<endl;
    return 0;
}
/** 本段代码小结
 * c++提供了一些模版类 来代替数组
 * vector是一种动态数组，可以在运行阶段设置对象的长度。vector是通过new和delete管理内存，但是是自动完成的。
 * vector类的功能比数组强大，但是性能稍低。如果是固定长度的数组，还是推荐数组。vector数据存储在自由存储区域。
 * array 也是固定长度，使用常量初始化长度，使用栈存储。array对象可以赋值给另一个对象，数组需要逐元素复制。
 * a1[-2] 将会被认为是*(a2-2)，表示向前移动两个double。指向的位置将是不确定的。
 * 可以使用at(),这种会在运行时检查是否合理，并且中断问题。c++允许多种表示法，只是代价不同。
 * */



