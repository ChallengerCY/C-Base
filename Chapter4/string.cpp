//
// Created by cy on 2019/12/18.
//

#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int Size=15;
    char name1[Size];
    char name2[Size]="C++owboy";

    cout<<"Howdy! I'm "<<name2;
    cout<<"! What's your name?\n";
    cin>>name1;
    cout<<"Well, "<<name1<<" , your name has ";
    cout<<strlen(name1)<<" letters and is stored\n";
    cout<<"in an array of "<< sizeof(name1)<<" bytes.\n";
    cout<<"Your initial is "<<name1[0]<<" .\n";
    name2[3]='\0';
    cout<<"Here are the first 3 characters of my name; ";
    cout<<name2<<endl;
    return 0;
}

/** 本段代码小结
 * 字符串是存储在内存中的连续字节中的一系列字符。意味着字符串可以存储到char数组中。但是数组末尾元素为'/0'才是字符串。
 * 处理字符串的时候，会逐个处理字符串中的字符，知道达到空字符为止。
 * 让数组比字符串长没有什么害处，只是会浪费一些空间。因为处理字符串是根据空字符的位置，而不是字符串的长度。c++对字符串长度没有限制。
 * 再确定字符串所需最短数组时，别忘了空字符也要计算进去。
 * 将字符串填充到char数组中时，会自动填充末尾的空字符。
 * c++中 char a ='s' 实际上存储的是两个字符"s"和"/0"组成的字符串。而"s"实际上表示的是字符串所在的地址。所以char a="s" 不合法。
 * 任何两个空白（空格 制表符 换行符）分隔的字符串常量都将会自动拼成一个字符串。拼接起来之后并不会在字符串之间添加空格，而是相邻拼接。
 * 将字符串存储到数组中，最常用的方法之一是 将数组初始化为字符串常量。将键盘或者文件输入读入到数组中。
 * <cstring> 提供了字符串相关方法。
 * strlen 获取字符串的长度。 只计算看得见的字符串
 * */
