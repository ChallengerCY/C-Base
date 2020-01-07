//
// Created by cy on 2020/1/6.
//

#include <iostream>
int main() {
    char ch;
    std::cout << "Type , and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if(ch=='\n')
            std::cout<<ch;
        else
            std::cout<<++ch;
        std::cin.get(ch);
    }
    std::cout<<"\nP;ease excuse the slight confusion.\n";
    return 0;
}

/** 本段代码小结
 * 使用了if else 结构。
 * */