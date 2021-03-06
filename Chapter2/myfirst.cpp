//
// Created by CY on 2019/11/14.
//
#include <iostream>

int main() {
    using namespace std;
    cout << "Come up and C++ me some time";
    cout << endl;
    cout << "You won't regret it!" << endl;
    return 0;
}


/**
 * 代码学习小结
 * 行注释由 //标识
 * #include 预处理编译指令
 * 函数头 int main()
 * using namespace 编译指令
 * 函数体 {...}
 * cout工具用于显示消息语句
 * return 用于结束main()函数
 * main()通常被启动代码调用，启动代码是由编译器添加到程序的，是程序和操作系统的桥梁。
 * int main(void)明确指出函数不接受任何参数，与空括号等价
 * c++必须包含一个名为main()的函数，程序开始运行时，通常从main()函数开始执行。
 * 以#开头的语句为变异命令，c++也使用一个预处理器。该编译指令标示在源代码被编译之前，替换或添加文本。
 * 头文件名c++与c略有不同。c++保留了对扩展名.h文件的支持。同时支持c开头的文件。比如math.h和cmath。没有h并不只是形式上的变化。
 * 没有h的头文件也可以包含名称空间
 * 类 函数 和变量是c++的标准组件，他们现在都被放置到std中。
 * using 编译指令使得std名称中的的所有名称都可使用。但是大型项目会出问题。所以建议只使用所需的名称。 using std：cout；
 * "双引号扩起来的字符叫做字符串"
 * <<插入运算符指出了信息流动的路径。
 * endl是一个特殊的c++符号 代表重启一行。在输入流中插入endl将导致屏幕光标移动到下一行。
 * endl能确保程序继续向前刷新输出。
 * c++中不能把空格，制表符或回车放到元素中间，回车不能放到字符串中间。
 *
 **/


