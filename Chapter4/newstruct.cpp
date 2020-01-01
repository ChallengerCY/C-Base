//
// Created by cy on 2019/12/30.
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
    inflatable * ps=new inflatable;
    cout<<"Enter name of inflatable item: ";
    cin.get(ps->name,20);
    cout<<"Enter volume in cubic feet: ";
    cin>>(*ps).volume;
    cout<<"Enter price: $";
    cin>>ps->price;
    cout<<"Name "<<(*ps).name<<endl;
    cout<<"Volume: "<<ps->volume<<" cubic feet\n";
    cout<<"Price: $"<<ps->price<<endl;
    delete ps;
    return 0;

}

/** 本段代码小结
 * 可以动态初始化结构。
 * 如果操作结构的时候使用的是结构名，可以使用.运算符访问成员。
 * 如果是指针，那么使用->操作符访问成员。
 * 如果ps是指向结构的指针，那么*ps则是结构变量。
 * */
