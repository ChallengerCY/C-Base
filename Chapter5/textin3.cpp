//
// Created by cy on 2020/1/4.
//

#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count=0;
    cin.get(ch);
    while(cin.fail()== false)
    {
        cout<<ch;
        ++count;
        cin.get(ch);
    }

    cout<<endl<<count<<" characters read\n";
    return 0;
}

/** 本段代码小结
 * 使用检测文件尾来EOF 来检测输入完成
 * Unix或者mac中使用ctrl+D 模拟文件尾。window是ctrl+z 加Enter
 * 检测到EOF后 cin将eofbit和failbit都设置为1。可以使用eof来查看eofbit是否被设置，如果检测到EOF 则eof函数返回true
 * fail 和eof 是事后检测的，应该、将该测试放到读取后。
 * 有些系统不支持eof 所以判断更多选择fail
 * cin.clean 可以模拟清除模拟的文件尾。但是有的系统不支持。
 * 可以使用while(cin)来取代判断。istream提供了一个可以将istream转换为bool值的函数。当cin出现在需要bool的地方，这个函数会被调用。
 * */

