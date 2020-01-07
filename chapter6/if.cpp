//
// Created by cy on 2020/1/5.
//

#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    char ch;
    int spaces=0;
    int total=0;
    cin.get(ch);
    while (ch!='.')
    {
        if(ch==' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }

    cout<<spaces<<" spaces, "<<total;
    cout<<" characters total in sentence\n";
    return 0;

}

/** 本段代码小结
 * 设置分支是设计智能程序的关键
 * 只有到ch==' '是true的时候。++spaces才会执行。
 * */

