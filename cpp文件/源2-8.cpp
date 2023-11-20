#include<iostream>
using namespace std;

int main()
{
	double a = 0, x, y = 0, d = 0;
	cin >> a;
	x = a;
	if (a < 0)
	{
		cout << "无平方根" << endl;
	}
	else if (a == 0)
	{
		cout << "平方根为0" << endl;
	}
	else
	{
		do
		{
			y = (x + a / x) / 2;
			d = y - x;
			x = y;

		} while (fabs(d) > 10e-10);
		cout << y << endl;
	}
	return 0;
}