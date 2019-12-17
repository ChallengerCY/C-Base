//
// Created by cy on 2019/12/17.
//

#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn=14;
    int lbs;
    cout<<"Enter your weight in pounds: ";
    cin>>lbs;
    int stone=lbs/Lbs_per_stn;
    int pounds=lbs%Lbs_per_stn;
    cout<<lbs<<" pounds are "<<stone
    <<" stone, "<<pounds<<" pounds."<<endl;

    return 0;

}

/** 本段代码小结
 * 求模运算与整数除法相结合，尤其适用于解决要求将一个量分成不同的整数单元的问题。
 * 1英石等于14磅
 * */

