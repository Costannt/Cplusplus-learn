#include <iostream>
using namespace std;

int main() {
    int a = 50 ;
    int *b = &a ;
    *b = 42 ;
    cout << a << endl;
    b = 0 ;
    cout << b << endl;
    return 0;
}