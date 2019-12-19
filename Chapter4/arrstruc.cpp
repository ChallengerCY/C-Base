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

int main() {
    using namespace std;
    inflatable guest[2] = {
            {"sy",0.20,12.49},
            {"a",2000,211}
    };

    cout<< sizeof(guest[0]);

    cout<<"The guests "<<guest[0].name<<" and "<<guest[1].name
    <<"\nhave a combine volume of"<<guest[0].volume+guest[1].volume<<" cubic feet.\n";

    return 0;
}

/**本段代码小结
 * 同样可以创建结构数组
 * c++也允许指定占用特定位数的结构成员，在与指定硬件设备上的寄存器对应非常方便。
 * 位字段的格式是 typename parmaname ：value value代表位数。位字段编程出现在低级编程中。
 * */
