//
// Created by cy on 2019/12/19.
//

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string s1="penguin";
    string s2,s3;

    cout<<"You can assign one string object to another: s2=s1\n ";
    s2=s1;
    cout<<"s1: "<<s1<<" s2: "<<s2<<endl;
    cout<<"you can assign a c-style to a string object.\n";
    cout<<"s2=\"buzzard\n";
    s2="buzzard";
    cout<<"s2: "<<s2<<endl;
    cout<<"you can concatenate string: s3=s1+s2\n";
    s3=s2+s1;
    cout<<"s3: "<<s3<<endl;
    cout<<"You can append strings.\n";
    s1+=s2;
    cout<<"s1 += s2 yields s1 = "<<s1<<endl;
    s2+="for a day";
    cout<<"s2 += \"for a day\" yields s2="<<s2<<endl;

    return 0;
}

/**本段代码小结
 * 不能将一个数组赋值给另一个数组，但是字符串对象可以
 * string对象可以使用运算符拼接。
 * */

