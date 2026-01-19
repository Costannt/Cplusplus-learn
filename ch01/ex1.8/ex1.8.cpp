#include <iostream>
using namespace std;
int main() {
    std::cout << "/*"; //合法
    std::cout << "*/"; //合法
    std::cout << /* "*/" */; //非法
    std::cout << /* "*/" /* "/*" */; //非法
}