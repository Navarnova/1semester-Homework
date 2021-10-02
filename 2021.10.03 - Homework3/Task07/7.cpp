#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;

	if (a > 0 && b > 0 && c > 0 && d > 0)
	{
		cout << endl;
	}
	else 
	{
		for (int x = 0; x <= 1000; ++x)
		{
			if ((a * pow(x, 3) + b * pow(x, 2) + c * pow(x, 1) + d) == 0)
			{
				cout << x << " ";
			}
		}
		cout << endl;
	}

	return EXIT_SUCCESS;
}