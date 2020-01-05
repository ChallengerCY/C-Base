//
// Created by cy on 2020/1/1.
//

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char word[5]="?ate";
    for (char ch = 'a'; strcmp(word,"mate"); ch++) {
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<"After loop ends,word is "<<word<<endl;
    return 0;
}

/**本段代码小结
 * word=="mate" 并不是数组字符串比较的方法。两个实际上都代表地址。判断的是是否存储在相同的地址上。
 * strcmp用于比较字符串，如果相同则返回0，如果第一个字符串按字母排序在第二个地址前，那么会返回负数。否则返回正数。
 * 按系统排序比按照字母排序更准确。意味着字符是根据字符的系统编码来比较的。大写字符的编码比小写字符的编码小。
 * 两个字符串即使被存在长度不同的数组中，也会是相同的，因为是以空字符比较而不是数组长度。
 * */

