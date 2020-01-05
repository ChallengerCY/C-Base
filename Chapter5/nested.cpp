//
// Created by cy on 2020/1/5.
//

#include <iostream>

const int Cities=5;
const int Years=4;
int main()
{
    using namespace std;
    const char * cities[Cities]={
            "hangzhou",
            "baotou",
            "beijing",
            "huhehaote",
            "shenzhen"
    };

    int maxtemps[Years][Cities]={
            {97,100,98,188,23},
            {92,100,98,188,23},
            {93,100,98,188,23},
            {94,100,98,188,23},
    };

    cout<<"Maximum temperatures for 2008-2011\n\n";
    for(int city=0;city<Cities;++city)
    {
        cout<<cities[city]<<":\t";
        for(int year=0;year<Years;++year)
            cout<<maxtemps[year][city]<<"\t";
        cout<<endl;
    }

    return 0;
}

/** 本段代码小结
 * c++ 没有提供二维数组，但是用户可以自己创建二维数组。
 * c++常用的一个做法是，将一个指针数组初始化为一组字符串常量。数组里的每个元素代表一个指针，指向字符串字面量所在的地址。
 * */