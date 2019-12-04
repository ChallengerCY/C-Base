//
// Created by CY on 2019/12/4.
//

#include <iostream>
using namespace std;

int main()
{
    int chest=42;
    int waist=42;
    int inseam=42;

    cout<<"Monsieur cuts a striking figure!"<<endl;
    cout<<"chest = "<<chest<<" (decimal for 42)"<<endl;
    cout<<hex;
    cout<<"waist = "<<waist<<" (hexadecimal for 42)"<<endl;
    cout<<oct;
    cout<<"inseam = "<<inseam<<" (octal for 42)"<<endl;
    return 0;
}

/** 本段代码小结
 *  cout<<hex；不会在屏幕上显示任何内容，只是修改了cout显示整数的方式。
 *  十六进制常用来表示内存地址，内存地址是没有符号的。因此unsigned int 比long更适合表示16位地址。
 *  c++提供了ll LL等后缀类型来表示对应的类型。
 * */
