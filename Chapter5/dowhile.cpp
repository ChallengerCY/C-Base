//
// Created by cy on 2020/1/1.
//

#include <iostream>

int main() {
    using namespace std;
    int n;
    cout<<"Enter numbers in the range 1-10 to find ";
    cout<<"my favorite number\n";
    do{
        cin>>n;

    }while (n!=7);
    cout<<"Yes . 7 is my favorite.\n";
    return 0;
}

/**本段代码小结
 * do while是出口条件循环，意味着先执行循环体，然后判定测试表达式。决定是否应该继续执行循环。
 *
 * */