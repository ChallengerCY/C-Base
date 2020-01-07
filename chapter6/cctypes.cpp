//
// Created by cy on 2020/1/7.
//

#include <iostream>
#include <cctype>

int main() {
    using namespace std;
    cout << "Enter text for analysis. and type @"
            " to terminate input.\n";

    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);


    }


    cout << chars << " letters. "
         << whitespace << " whitespace "
         << digits << "digits "
         << chars << " chars "
         << punct << " punctuations "
         << others << " others.\n";
    return 0;

}

/**本段代码小结
 * c++继承了一个函数库cctype
 * isalnum 判断参数是字母或数字
 * isalpha 判断是否是字母。
 * iscntrl 是不是控制字符
 * isdigit 如果是0-9。
 * isgraph 如果参数是除了空格之外的打印字符。
 * islower 是否是小写字符
 * isprint 参数是否是打印字符
 * ispunct 是否是标点字符
 * isspace 是否是标准空字符。空格 换行符 回车 水瓶制表符，垂直制表符等。
 * isupper 是否是大写字符
 * isxdigit 是否是十六进制字符
 * tolower 如果是大写字符返回小写字符
 * toupper 如果是小写字符，返回大写字符。
 * */

