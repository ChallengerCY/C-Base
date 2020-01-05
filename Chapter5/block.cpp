//
// Created by cy on 2020/1/1.
//

#include <iostream>
int main()
{
    using namespace std;
    cout<<"The Amazing Accounto will sum and averge ";
    cout<<"five numbers for you .\n";
    cout<<"Please enter five values:\n";
    double number;
    double sum=0.0;
    for (int i = 1; i <=5 ; ++i) {
        cout<<"Value "<<i<<": ";
        cin>>number;
        sum+=number;
    }
    cout<<"Five exquisite choices indeed! ";
    cout<<"They sum to "<<sum<<endl;
    cout<<"and average to "<<sum/5<<".\n";
    cout<<"The Amazing Account0 bids you adieu! .\n";
    return 0;
}

/**本段代码小结
 * 使用{}可以在for循环中插入多条语句。
 */

