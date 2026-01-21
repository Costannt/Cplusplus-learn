#include <iostream>
#include "Sales_data.h"
using namespace std;

// 功能等价于 Sales_item::same_isbn
bool same_isbn(const Sales_data& lhs, const Sales_data& rhs)
{
    return lhs.bookNo == rhs.bookNo;
}

// 功能等价于 operator+=
Sales_data& add_assign(Sales_data& lhs, const Sales_data& rhs)
{
    if (!same_isbn(lhs, rhs))
        throw invalid_argument("ISBNs must match");
    lhs.units_sold += rhs.units_sold;
    lhs.revenue += rhs.revenue;
    return lhs;
}

// 功能等价于 operator>>
istream& read(istream& is, Sales_data& item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    if (is)
        item.revenue = item.units_sold * price;
    else
        item = Sales_data(); // 重置为默认状态
    return is;
}

// 功能等价于 operator<<
ostream& print(ostream& os, const Sales_data& item)
{
    os << item.bookNo << " "
       << item.units_sold << " "
       << item.revenue << " ";
    if (item.units_sold != 0)
        os << item.revenue / item.units_sold;
    else
        os << "(no sales)";
    return os;
}

int main()
{
    Sales_data total;
    
    // 尝试读取第一笔数据
    if (read(cin, total))
    {
        Sales_data trans;
        while (read(cin, trans))
        {
            if (same_isbn(total, trans))
            {
                add_assign(total, trans);
            }
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        // 输出最后一组
        print(cout, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}