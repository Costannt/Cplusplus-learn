#include<iostream>
#include"Sale_item.h"
using namespace std;

int main()
{
	Sales_item total;

	if (cin >> total)
	{
		Sales_item trans;
		int cnt = 1;
		while (cin >> trans)
		{
			if (trans.same_isbn(total))
			{
				total += trans;
				++cnt;
			}
			else
			{
				cout << total << endl;
				total = trans;
				cnt = 1;
			}
			cout << total << endl;
		}
	}

	return 0;
}
