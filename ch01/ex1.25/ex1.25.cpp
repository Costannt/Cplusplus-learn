#include <iostream>
#include "Sale_item.h"

using namespace std;

int main()
{
    Sales_item total;

    if (cin >> total)
    {
        Sales_item trans;
        while (cin >> trans)
        {
            if (trans.same_isbn(total))
            {
                total += trans;
            }
            else
            {
                cout << total << endl;
                total = trans;
            }
            
        }
        cout << total << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}