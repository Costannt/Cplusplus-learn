#include <iostream>
using namespace std;
int main()
{
    int a = 3 , b = 4;
    decltype(a) c = a;//int c = a;
    decltype((b)) d = a;//int &d = a;
    ++c;
    ++d;
    cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << endl;
    return 0;
}
