//
// Created by CY on 2019/11/20.
//

#include <iostream>

int main() {
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here ara two more. ";
    carrots = carrots + 2;
    cout << "How you have " << carrots << " carrots." << endl;
    return 0;
}

/**本段代码小结
 * 使用cin来获取输入。本例中，数据通过cin流向carrots。
 * 类是用户定义的一种类型。描述它能够表示什么信息和可对数据执行哪些操作。
 * 类描述了一种数据类型的全部属性，对象是根据这些描述创建的实体。
 */