//
// Created by cy on 2019/12/19.
//

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20]="jaguar";
    string str1;
    string str2="panther";

    cout<<"Enter a kind of feline: ";
    cin>>charr1;
    cout<<"Enter another kind of feline: \n";
    cin>>str1;
    cout<<"Here are some felines:\n";
    cout<<charr1<<"  "<<charr2<<" "<<str1<<" "<<str2<<endl;
    cout<<"The third letter in "<<charr2<<" is "<<charr2[2]<<endl;
    cout<<"The third letter in "<<str2<<" is "<<str2[2]<<endl;
    return 0;
}

/**本段代码小结
 * 要使用stirng类，需要引入头文件string
 * string和字符数组的区别在于可以将string对象声明为简单变量。而不是数组。
 * string的长度随着输入而变化，初始时为0
 * */

