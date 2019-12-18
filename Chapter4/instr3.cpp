//
// Created by cy on 2019/12/18.
//

#include <iostream>

int main()
{
    using namespace std;
    const int ArSize=20;
    char name[ArSize];
    char dessert[ArSize];

    cout<<"Enter your name:\n";
    cin.get(name,ArSize).get();
    cout<<"Enter your favorite dessert:\n";
    cin.get(dessert,ArSize).get();
    cout<<"I have some delicious "<<dessert;
    cout<<" for you,"<<name<<" .\n";
    return 0;

}

/** 本段代码小结
 * cin.get会把换行符保存到输入队列中。假如连续两次调用get，则第二次会读取到换行符，然后终止读取收入。做法是在两个cin.get中间调用一次不带参数的get
 * getline 使用更方便 get使输入更仔细，可以判断停止读取的原因是读取了整行还是数组已经被填满。通过再次调用get，就可以知道。
 * get读取空行后会设置失效位，意味着接下来的输入将被阻断。但可以使用cin。clear来回复输入。
 * 如果遇到数据超过存储的问题，get和getline会将余下的数据放到输入队列中，getline还会设置失效位，终止后面的输入。
 * */
