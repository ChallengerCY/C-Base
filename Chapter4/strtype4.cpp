//
// Created by cy on 2019/12/19.
//

#include <iostream>
#include <cstring>
#include <string>

int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout<<"Length of string in charr before input: "<<strlen(charr)<<endl;
    cout<<"Length of string in str before input: "<<str.size()<<endl;
    cout<<"Enter a line of text:\n";
    cin.getline(charr,20);
    cout<<"You entered: "<<charr<<endl;
    cout<<"Enter another  line of text:\n";
    getline(cin,str);

    cout<<"you entered: "<<str<<endl;
    cout<<"Length of string in charr after input: "<<strlen(charr)<<endl;
    cout<<"Length of string in str after input: "<<str.size()<<endl;

    cout<<R"("raw string")"<<endl;
    cout<<R"+*(("raw string"))+*"<<endl;
    return 0;
}

/**本段代码小结
 * 对于一个未赋值的数组，它的长度是不确定的，strlen从数组的第一位开始，直到遇到一个空字符。
 * getline使输入免于超出数组的边界。
 * cin 作用于字符串使用了友元函数
 * c++ 提供原始字符串 R""。
 * 原始字符串提供自定义界定符以+*()*+为默认界定符。 也可以自定义界定符，但是不能有空格，左右括号斜杠和控制字符。
 * */

