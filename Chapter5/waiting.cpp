//
// Created by cy on 2020/1/1.
//

#include <iostream>
#include <ctime>
int main()
{
    using namespace std;
    cout<<"Enter the delay time,in seconds: ";
    float secs;
    cin>>secs;
    clock_t delay=secs*CLOCKS_PER_SEC;
    cout<<"starting\a\n";
    clock_t  start=clock();
    while (clock()-start<delay);
    cout<<"done \a\n";
    return 0;
}

/**本段代码小结
 * clock()函数返回开始执行后所用的系统时间。
 * clock返回的不一定是秒，而且返回的类型可能是long也可以是unsigned long
 * CLOCKS_PER_SEC 定义了每秒包含的时间单位数。将系统时间处以这个数可以得到秒数。以秒数乘以常量可以获得以系统时间为单位的时间。
 * clock_t 是clock()的返回类型的别名。可以当作类型使用。
 * 两种创建别名的形式
 * #define BYTE char 预处理器会使用char替换所有的BYTE。BYTE则称为char的别名。
 * typedef char byte byte是别名 推荐使用typedef
 * #define FLOAT_POINTER float *  FLOAT_POINTER a,b 会被解读为float * a ，b并不准确。
 * typedef 并不是创建了一个新的类型。
 * */
