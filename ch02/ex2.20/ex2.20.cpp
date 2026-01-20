#include <iostream>
using namespace std;

int main() {
    int i = 42;
    int *p1 = &i;
    // i = i * i;
    *p1 = *p1 * *p1; // 等价于i = i * i
    cout << i << endl;   
    return 0;
}