//
// Created by cy on 2019/12/11.
//

#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);

    float tub =10.0/3.0;
    double mint =10.0/3.0;
    const float million=1.0e6;
    cout<<"tub = "<<tub;
    cout<<", a million tubs = "<<million*tub;
    cout<<",\nand ten million tubs = ";
    cout<<10*million*tub<<endl;
    cout<<"mint = "<<mint<<" and a million mints = ";
    cout<<million*mint<<endl;
    return 0;
}

/** 本段代码小结
 * cout.setf()迫使输出使用定点表示法。以便更好的了解精度。它防止程序把较大的值切换为E表示法。并使程序显示到小数点后6位。
 * cout通常会省略末尾的0，cout.setf覆盖了这种表示
 * double至少有13位精度值。float至少有6位精度值。
 * float至少32位，double至少48位。long double至少和double一样多
 * const 用于定义常量。该常量不可再后续进行修改。
 * */


