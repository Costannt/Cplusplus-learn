#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int count = a < b ? a : b;
    int limit = a > b ? a : b; // 显然也可以用if写，三元表达式和if的效果是一样的。
    while (count <= limit) {
        cout << count << endl;
        count++;
    }
}