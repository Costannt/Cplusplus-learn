#include <iostream>
using namespace std;
int main() {
    int count = 50;
    int sum = 0;
    while (count <=100)
    {
        sum += count;
        count ++ ;
    }
    cout << count - 1 << endl;
    cout << sum << endl;
    return 0;
}