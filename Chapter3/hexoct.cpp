//
// Created by CY on 2019/12/4.
//

#include <iostream>
int main()
{
    using namespace std;
    int chest=42;
    int waist=0x42;
    int inseam=042;

    cout<<"Monsieur cuts a striking figure!\n";
    cout<<"chest = "<<chest<<" (42 in decimal)\n";
    cout<<"waist = "<<waist<<" (0X42 in hex)\n";
    cout<<"inseam = "<<inseam<<" (042 in octal)\n";
    return 0;
}

/** 本段代码小结
 * c++能以三种不同的计算方式来写整数：基数为10，基数为8(老师UNIX版本)和基数16(硬件黑客的最爱)。
 * 默认情况下 cout以十进制显示整数。
 * 不论把值以任何形式表示，都会在计算机中存储为二进制数。
 * */
