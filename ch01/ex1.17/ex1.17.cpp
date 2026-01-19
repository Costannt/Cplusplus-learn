#include <iostream>
using namespace std;

int main()
{
    int currVal = 0, val = 0;
    if (cin >> currVal) // 读取第一个数
    {
        int cnt = 1; // 保存当前值的个数
        while (cin >> val) // 读取剩余的数
        {
            if (val == currVal) // 如果值相同
                ++cnt;         // 个数加一
            else
            {
                // 否则，打印前一个值的个数
                cout << currVal << " occurs " << cnt << " times " << endl;
                currVal = val; // 记住新值
                cnt = 1;       // 重置计数器
            }
        }
        // 打印最后一个值的个数
        cout << currVal << " occurs " << cnt << " times " << endl;
    }
    return 0;
}