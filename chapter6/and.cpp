//
// Created by cy on 2020/1/6.
//

#include <iostream>
const int ArsSize=6;

int main()
{
    using namespace std;
    float naaq[ArsSize];

    int i=0;
    float  temp;
    cout<<"First value: ";
    cin>>temp;
    while (i<ArsSize&&temp>=0)
    {
        naaq[i]=temp;
        ++i;
        if (i<ArsSize)
        {
            cout<<"Next value: ";
            cin>>temp;
        }
    }

    if(i==0)
        cout<<"No data--byte\n";
    else
    {
        cout<<"Enter you NAAQ: ";
        float you;
        cin>>you;
        int count=0;
        for(int j=0;j<i;j++)
            if(naaq[j]>you)
                ++count;
            cout<<count;

    }

    return 0;
}

/**本段代码小结
 * 与运算符&& 即必须所有条件都满足才算true。
 * 与运算符的优先级高于或。
 * c++确保从左到右计算逻辑表达式。
 * */