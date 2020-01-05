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
    cin.get(ch);
    while (ch!='#')
    {
        cout<<ch;
        ++count;
        cin.get(ch);
    }
    cout<<endl<<count<<" characters read\n";
    return 0;

}

/**本段代码小结
 * 如果需要cin识别传入的空格 则使用cin.get来获取输入。
 * 这里的get()运用了重载的特性。
 * */

