//
// Created by cy on 2019/12/17.
//

#include <iostream>
int main()
{
    using namespace std;
    int auks,bats,coots;

    //这里计算完成之后被截断成31
    auks=19.99+11.99;
    //这里在计算之前被截断成19和11
    bats=(int)19.99+(int)11.99;
    coots=int(19.99)+int(11.99);
    cout<<"auks = "<<auks<<", bats = "<<bats;
    cout<<", coots = "<<coots<<endl;

    char ch='Z';
    cout<<"The code for "<<ch<<" is ";
    cout<<int(ch)<<endl;
    cout<<"Yes,the code is ";
    cout<< static_cast<int>(ch)<<endl;

    return 0;
}

/**本段代码小结
 * static_cast<typename> 用于强制将类型转换为对应的类型。
 * c++中有auto 推断类型
 * */


