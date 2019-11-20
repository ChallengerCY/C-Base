//
// Created by CY on 2019/11/20.
//

#include <iostream>
void simon(int);
int main()
{
    using namespace std;
    simon(3);
    cout<<"Pick an integer： ";
    int count;
    cin>>count;
    simon(count);
    cout<<"Done!"<<endl;
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout<<"Simon says touch your toes "<< n <<" times."<<endl;
}

/**本段代码小结
 * 函数体的通用结构是：函数头 和花括号包含的函数体。
 * c++不允许将函数定义嵌套在另一个函数定义中。每个函数都是独立的。平等的。
 * main函数的返回值最终返回给操作系统。通常的约定是返回0，代表程序运行成功。非零则意味着存在问题。
 * 如果c++程序无法打开文件，可以将它设计为返回一个非零值。然后便可以设计一个外壳脚本或者批处理文件来运行该程序。如果该程序发出提示失败的消息，则采取其他措施。
 * */
