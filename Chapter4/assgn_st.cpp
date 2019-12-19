//
// Created by cy on 2019/12/19.
//

#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable bouquet={
            "sy",
            0.20,
            12.49
    };

    inflatable choice;
    cout<<"bouquet: "<<bouquet.name<<" for $";
    cout<<bouquet.price<<endl;

    choice=bouquet;
    cout<<"choice: "<<choice.name<<" for $";
    cout<<choice.price<<endl;

    return 0;
}

/**本段代码小结
 * 结构可以作为参数传递给函数，也可以让函数返回一个结构。
 * =号赋值同样有效。
 * c++结构体与c不同，c++结构体可以有成员函数。
 */
