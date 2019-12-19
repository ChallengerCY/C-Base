//
// Created by cy on 2019/12/19.
//

#include <iostream>
#include <cstring>
#include <string>

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20]="jaguar";
    string str1;
    string str2="panther";

    str1=str2;
    strcpy(charr1,charr2);
    str1+=" paste";
    strcat(charr1,charr2);
    int len1=str1.size();
    int len2=strlen(charr1);

    cout<<"The string "<<str1<<" contains "<<len1<<" characters.\n";
    cout<<"The string "<<charr1<<" contains "<<len2<<" characters.\n";

    return 0;
}

/**本段代码小结
 * c++保留了c风格的函数
 * strcat会试图将所有字符复制到数组中，危险的地方在于如果放不下会覆盖相邻的内存单元。
 * */

