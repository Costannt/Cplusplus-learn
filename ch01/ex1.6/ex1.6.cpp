#include <iostream>
using namespace std;

int main() {
    int v1=0, v2 = 0;
    std::cout << "The sum of " << v1 << " and " << v2  << " is " << v1 + v2 << std::endl;
    return 0;
}

    // std::cout << "The sum of" << v1;
    // << " and " << v2;
    // << " is " << v1 + v2 << std::endl;
    // 这个表达式明显是非法的，因为重载符号要对流对象使用