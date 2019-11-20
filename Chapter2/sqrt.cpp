//
// Created by CY on 2019/11/20.
//

#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    double area;
    cout<<"Enter the floor area,in square feet,of you home: ";
    cin>>area;
    double side;
    side=sqrt(area);
    cout<<"That's the equivalent of a square "<<side
    <<" feet to the side."<<endl;
    cout<<"How fascinating!"<<endl;
    return 0;
}

/**  本段代码小结
 * 在使用函数之前 c++必须知道函数的参数类型和返回值类型。
 * c++程序应该为程序中使用的每个函数提供原型。
 * 函数原型之于函数就像变量声明之于变量。
 * 示例：double sqrt(double); 意味着声明了一个名为sqrt的函数。该函数返回double类型。该函数需要double参数。
 * 本例中sqrt()可以直接使用是因为在cmath中定义了该函数的原型。
 * 应在首次调用函数之前提供其原型。通常的做法是放到main()函数前面。
 * 将看起来像整数的1536赋值给double，将以实数存储。其小 数为.0；
 * 在有些语言中，有返回值的函数被称为函数。没有返回值的函数被称为过程或子程序。在c++中都称之为函数。
 * */

