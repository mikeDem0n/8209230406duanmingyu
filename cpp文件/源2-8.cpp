#include<iostream>
using namespace std;

int main()
{
	double a = 0, x, y = 0, d = 0;
	cin >> a;
	x = a;
	if (a < 0)
	{
		cout << "��ƽ����" << endl;
	}
	else if (a == 0)
	{
		cout << "ƽ����Ϊ0" << endl;
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