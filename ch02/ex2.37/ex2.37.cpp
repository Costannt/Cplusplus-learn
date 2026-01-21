#include <iostream>
using namespace std;
int main() {
    int a = 3, b = 4;
    decltype(a) c = a;      // int c = a;
    decltype(a = b) d = a;  // int &d = a;这是赋值操作返回了一个引用导致的。
    return 0;
}