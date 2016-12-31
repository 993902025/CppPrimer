// L_c53.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	for (;;)
	{
		int a, b;
		cin >> a >> b;
		if (a != 0)
		{
			cout << static_cast<double>(a / b) << endl;
			cout << static_cast<double>(a) / b << endl;
			cout << a / static_cast<double>(b) << endl;
			cout << static_cast<double>(a) / static_cast<double>(b) << endl;
		}
		cout << "\n\n\n" << endl;
	}
    return 0;
}

