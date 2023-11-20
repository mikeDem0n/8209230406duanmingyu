#include<iostream>
using namespace std;
int main() 
{
	float x, y;
	cin >> x;
	if (x < 10)
	{
		if (x >= 5) 
		{
			y = x * x;
			cout << y << endl;
	}
		else
		{
			if (x >= 1) 
			{
				y = 1 + 1 / (2 * x);
				cout << y << endl;
			}
			else 
			{
				if (x > 0)
				{
					y = 3 - 2 * x;
					cout << y << endl;

			    }
}

		}

	}
	
	


}