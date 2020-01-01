//
// Created by cy on 2019/12/30.
//

#include <iostream>
#include <cstring>
using namespace std;
char * getname(void);
int main()
{
    char *name;
    name=getname();
    cout<<name<<" at "<<(int *)name<<"\n";
    delete[](name);

    name=getname();
    cout<<name<<" at "<<(int *)name<<"\n";
    delete[](name);
    return 0;
}

char * getname()
{
    char temp[80];
    cout<<"Enter last name: ";
    cin>>temp;
    char *pn=new char[strlen(temp+1)];
    strcpy(pn,temp);
    return pn;
}

/**本段代码小结
 * c++中的内存存储方式，有自动存储，静态存储，动态存储和线程存储。
 * 在函数内部定义的常规变量是自动存储空间。意味着在函数调用的时候自动产生，在函数结束时消亡。例如程序中的temp。自动变量通常存储于栈中。
 * 静态存储指的是整个程序执行期间都存在的存储方式。一种方法是在函数外面定义，另一种是使用static关键字。
 * 动态存储 指的是使用new和delete 这种方式更加灵活，但是内存管理比较复杂，如果不释放，会造成内存泄漏。
 * c++有智能指针来执行动态存储的开辟和释放。
 * */
