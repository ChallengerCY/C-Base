//
// Created by cy on 2020/1/5.
//

#include <iostream>

int main(void)
{
    using namespace std;
    int ch;
    int count=0;
    while ((ch=cin.get())!=EOF)
    {
        cout.put(char(ch));
        ++count;
    }
    cout<<endl<<count<<" characters reads\n";
    return 0;
}

/** 本段代码小结
 * cin.get() 返回输入的下一个字符。
 * EOF是一个代表文件尾的常量。值为-1。该值必须不同于任何有效的字符值。
 * 更推荐使用textin3中的方式，使用istream对象。因为可以拼接其他方法。
 * */

