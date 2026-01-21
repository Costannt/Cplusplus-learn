#include <iostream>
using namespace std;
int main()
{
    const int i = 42; //常值整型
    auto j = i; //整型
    const auto &k = i; //常引用整型
    auto *p = &i;//常整型指针
    const auto j2 = i, &k2 = i;//常整型，常引用整型
    
    return 0;
}