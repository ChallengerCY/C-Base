//
// Created by cy on 2019/12/30.
//

#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;
    int *p_updates;
    p_updates=&updates;

    cout<<"Values : updates = "<<updates;
    cout<<", *p_updates = "<<*p_updates<<endl;

    cout<<"Address : &updates = "<<&updates;
    cout<<",  p_updates = "<<p_updates<<endl;

    *p_updates=*p_updates+1;
    cout<<" Now updates = "<<updates<<endl;
    return 0;

}

/** 本段代码小结
 * 存储数据的新策略是，将地址视为指定的量，而将值视为派生量。即指针 用于存储值的地址。
 * *是间接值或者解除引用。
 *
 * */
