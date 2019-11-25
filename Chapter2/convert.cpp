//
// Created by CY on 2019/11/25.
//

#include <iostream>

int stonetolb(int);

int main()
{
    using namespace std;

    int stone;
    cout<<"Enter the weight in stone: ";
    cin>>stone;
    int pounds=stonetolb(stone);
    cout<<stone<<" stone = ";
    cout<<pounds<<" pounds. "<<endl;
    return 0;

}

int stonetolb(int sts)
{
    return sts*14;
}

/**本段代码小结
 * return 后面使用了一个比较复杂的语句 这里避免创建一个新的变量。将结果赋值给该变量，然后将其返回。
 * 本示例自定义了一个返回值为int的函数。
 * int pounds=pounds+stonetolb(10); 通常,在可以使用简单常量的地方。都可以使用一个返回值类型与该常量相同的函数。
 * stonetolb()函数有四个特性：有函数头和函数体。接受一个参数。返回一个值。需要一个原型。 可以把它当作标准的函数格式。
 *
 * using指令通行的理念是，只让需要访问名称空间的std的函数访问它是更好的选择。
 * */

