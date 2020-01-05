//
// Created by cy on 2020/1/1.
//

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout<<"Enter a word: ";
    string word;
    cin>>word;
    char temp;
    int i,j;
    for(j=0,i=word.size()-1;j<i;--i,++j)
    {
        temp=word[i];
        word[i]=word[j];
        word[j]=temp;
    }
    cout<<word<<"\nDone\n";
    return 0;
}

/**本段代码小结
 * ，运算符允许将两个表达式放到一个表达式的地方
 * 逗号的优先级最低。
 * */

