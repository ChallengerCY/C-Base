//
// Created by cy on 2020/1/1.
//

#include <iostream>
const int ArSize=20;
int main()
{
    using namespace std;
    char name[ArSize];
    cout<<"Your first name. Please: ";
    cin>>name;
    cout<<"Here is your name,verticalized and ASCIIized:\n";
    int i=0;
    while (name[i]!='\0')
    {
        cout<<name[i]<<": "<<int (name[i])<<endl;
        i++;
    }
    return 0;
}

/**本段代码小结
 * while是没有初始化和更新部分的for循环。只有测试条件
 * 首先计算圆括号内的表达式。如果为true，执行循环体。直到条件为false。
 * 循环测试条件部分容易造成死循环。
 * 当name[i]是空字符的时候 其编码是0或者false。
 * for循环和while循环在本质上是相同的。使用哪个是风格上的问题。for通常用来循环计数
 * 无法预知循环次数的时候使用while
 * 循环设计的准则。 1.指定循环终止的条件 2.首次测试前初始化条件。在条件被再次测试前更新条件。for在结构上占优。
 *
 * */
