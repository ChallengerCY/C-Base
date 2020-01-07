//
// Created by cy on 2020/1/7.
//

#include <iostream>

const char  * quality[4]=
        {
          "10000-mater race.\n",
          "mud tug-of-war.\n",
          "masters canoe jousting.\n",
          "pie-throwing festival.\n",
        };

int main()
{
    using namespace std;
    int age;
    cout<<"Enter your age in years: ";
    cin>>age;
    int index;
    if(age>17&&age<35)
        index=0;
    else if(age>35&&age<50)
        index=1;
    else if(age>50&&age<65)
        index=2;
    else
        index=3;

    cout<<"You quality for the "<<quality[index];
    return 0;
}


/**本段代码小结
 * char指针数组可以标识字符串。本质是char指针可以标识一个字符串开始的位置。
 * */