//
// Created by cy on 2020/1/6.
//

#include <iostream>
const int Fave=27;
int main()
{
    using namespace std;
    int n;
    cout<<"Enter a number in the range 1-100 to find ";
    cout<<"my favorite number: ";
    do
    {
        cin>>n;
        if(n<Fave)
            cout<<"Too low -- guess again: ";
        else if (n>Fave)
            cout<<"Too high -- guess again: ";
        else
            cout<<Fave<<" IS right!\n";
    }while (n!=Fave);
    return 0;
}

/** 本段代码小结
 * 使用if elseif else 来设计拥有多个条件分支的程序。
 * */
