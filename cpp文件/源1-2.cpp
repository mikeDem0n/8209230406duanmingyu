#include<iostream>
using namespace std;
int main()
{
	const float �� = 3.14;
	float r, h, v;
	cin >> r >> h;
	v = �� * r * r * h / 3;
	cout << v << endl;
	return 0;
}