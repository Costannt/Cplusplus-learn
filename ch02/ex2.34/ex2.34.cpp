#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int &r = i;
    auto a = r;

    const int ci = i;
    const int &cr = ci;
    
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;

    const auto f = ci;

    auto &g = ci;
    //错误 auto &h = 42;
    const auto &j = 42;
    auto k = ci;
    auto &l = i;
    auto &n = i;
    auto *p2 = &ci;

    a = 42;
    b = 42;
    c = 42;
    // d = 42;
    // e = 42;
    // f = 42;
    b = 32;

    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << j << " " << k << " " << l << " " << n << " " << p2 << endl;
    return 0;
}