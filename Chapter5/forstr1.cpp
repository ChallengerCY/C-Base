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
    for (int i = word.size()-1; i >=0 ; i--) {
        cout<<word[i];
    }
    cout<<"\nBye.\n";
    return 0;
}

/**本段代码小结
 * for循环可以依次访问字符串中的每个字符
 * 字符串长度减一是为了忽略末尾的空字符
 * */
