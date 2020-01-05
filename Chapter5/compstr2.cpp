//
// Created by cy on 2020/1/1.
//

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string word="?ate";
    for(char ch ='a';word!="mate";ch++)
    {
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<"After loop ends, word is "<<word<<endl;
    return 0;
}

/**本段代码小结
 * string类字符串提供了更简单的比较，因为对运算符进行了重载。
 * 本例中的循环不属于引用计数，而是条件循环，所以更适合使用while循环。
 *
 * */

