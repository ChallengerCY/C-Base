//
// Created by CY on 2019/12/4.
//

#include <iostream>
#define ZERO 0

#include <climits>

int main()
{
    using namespace std;
    short sam=SHRT_MAX;
    unsigned short sue=sam;

    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl
        <<"Add $1 to each account."<<endl<<"Now ";
    sam=sam+1;
    sue=sue+1;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited.\nPoor Sam!"<<endl;
    sam=ZERO;
    sue=ZERO;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl;
    cout<<"Take $1 from each account."<<endl<<"Now ";
    sam=sam-1;
    sue=sue-1;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposited."<<endl<<"Lucky Sue!"<<endl;
    return 0;
}

/** 本段代码小结
 * unsigned 用于声明无符号类型。
 * 本段示例代码可以看出，当整型变量的行为超过了限制，其值将变化为范围另一端的取值。
 * int被设置为对目标计算机而言作为自然的长度。自然长度指的是计算机处理起来效率最高的长度。
 * 如果没有非常有说服力的理由来选择其他类型，则应该使用int。
 * 要存储超过20亿的值可以使用longlong。
 * 要注意不同类型在不用机器上面的宽度。否则会出现无法正常工作的情况。
 * 如果short比int小，则使用short可以节省内存。
 * 如果只需要一个字节，可以使用char。
 * */

