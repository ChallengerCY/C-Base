//
// Created by cy on 2020/1/1.
//

#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count=0;
    cout<<"Enter characters; enter # to quit : \n";
    cin>>ch;
    while (ch!='#')
    {
        cout<<ch;
        ++count;
        cin>>ch;
    }
    cout<<endl<<count<<" characters read\n";
    return 0;
}

/** 本段代码小结
 * cin在读取char类型时 和其他基本类型一样会忽略空字符或者换行符。
 * 发送给cin的数据会被缓冲，只有按下Enter的时候，输入的内容才会发送给程序。
 * */