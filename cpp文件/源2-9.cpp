#include<iostream>
using namespace std;
int main() {
	int n=2;
	int m = 2;
	int i = 1;
	for (; m+n*2<100;)
	{
		n = n * 2;
		m = m + n;
		i++;
	}
	float b = m * 0.8;
	cout << b / i << endl;
}