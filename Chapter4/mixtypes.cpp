//
// Created by cy on 2019/12/30.
//

#include <iostream>
struct antarctica_years_end
{
    int year;
};

int main()
{
    antarctica_years_end s01,s02,s03;
    s01.year=1998;
    antarctica_years_end *pa=&s02;
    pa->year=1999;
    antarctica_years_end trio[3];
    trio[0].year=2003;
    std::cout<<trio->year<<std::endl;
    const antarctica_years_end *arp[3]={&s01,&s02,&s03};
    std::cout<<arp[1]->year<<std::endl;
    const antarctica_years_end** ppb=arp;
    std::cout<<(*ppb)->year<<std::endl;
    std::cout<<(*(ppb+1))->year<<std::endl;
    return 0;
}

/**本段代码小结
 * 创建类型组合
 * **用于创建指向指针数组的指针。
 * */

