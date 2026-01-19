#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int count = a;
    while (count <= b) {
        cout << count << endl;
        count++;
    }
}