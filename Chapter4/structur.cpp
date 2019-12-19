//
// Created by cy on 2019/12/19.
//

#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest={
            " CY",
            1.88,
            29.99
    };

    inflatable pal={
            "CY2",
            3.12,32.99,
    };

    cout<<"Expand your guest list with "<<guest.name;
    cout<<" and "<<pal.name<<"!\n";

    cout<<"You can hava both for $";
    cout<<guest.price+pal.price<<":\n";
    return 0;
}

/**本段代码小结
 * 同一个结构体可以存储多种数据类型
 * 结构是oop的基石。
 * 结构声明的位置很重要。外部声明的结构可以用到文件夹所有函数中。局部声明的函数只能用在这个函数里。
 * c++不提倡使用外部变量，但是提倡使用外部结构。
 * */
