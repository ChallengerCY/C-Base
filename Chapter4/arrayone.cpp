//
// Created by cy on 2019/12/18.
//

#include <iostream>

int main()
{
    using namespace std;
    int yams[4];
    yams[0]=7;
    yams[1]=8;
    yams[2]=6;
    yams[3]=11;
    int yamcosts[3]={20,30,5};

    cout<<"Total yams = ";
    cout<<yams[0]+yams[1]+yams[2]<<endl;
    cout<<"The package with "<<yams[1]<<" yams costs ";
    cout<<yamcosts[1]<<" cents per yam. \n";
    int total = yams[0]*yamcosts[0]+yams[1]*yamcosts[1]+yams[2]*yamcosts[2];
    cout<<"The total yam expense is "<<total<<" cents";
    cout<<"\nSize of yams array = "<< sizeof(yams);
    cout<<" bytes.\n";
    cout<<"Size of one element = "<< sizeof(yams[0]);
    cout<<" bytes.\n";
    return 0;
}

/** 本段代码小结
 * 数组是一种数据格式，能够存储多个同类型的值。
 * 每个值都存在独立的数组元素中，计算机在内存中依次存储数组的各个元素。
 * 声明数组需要满足三个条件 存储在每个元素中的值的类型。数组名。数组中的元素数。
 * typename arrayname[arraysize]
 * arraysize 必须是整型常数或者const值，或者常量表达式。
 * 数组之所以叫复合类型，是因为数组是由其他类型来创建的。不能将某种东西声明为数组，必须是特定类型的数组。
 * 数组可以单独访问数组元素。使用下标或者索引来对元素进行编号。c++是从0开始编号的。
 * 尽量确保元素下标存在，不然会发生未知的问题。
 * sizeof 作用于数组得到的将是整个数组中的字节数。
 * 初始化数组时，可提供少于数组的元素数目。为负值的会被设置为0。
 * int yams[]={3,4} 也是可行的，但是不推荐让编译器去推断。
 * */

