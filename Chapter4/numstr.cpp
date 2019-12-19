//
// Created by cy on 2019/12/19.
//

#include <iostream>

int main()
{
    using namespace std;
    cout<<"What year was your house built\n";
    int year;
    cin>>year;
    cin.get();
    cout<<"What is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout<<"Year built : "<<year<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Done! \n";
    return 0;
}

/**本段代码小结
 * 第一个 cin结束之后读取到了换行符，cin.getline直接读取换行符导致停止读取。
 * 解决的办法是在读取地址之前先丢弃换行符。
 * */
