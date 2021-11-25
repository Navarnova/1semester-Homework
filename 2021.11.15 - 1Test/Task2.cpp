#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int i = 0;
	int mn = 10000;
	int mx = -10000;

	while (cin >> x) 
	{
		i += 1;

		if (i % 2 == 0) 
		{
			if (mx < x)
			{
				mx = x;
			}
		}
		else 
		{ 
			if (mn > x)
			{
				mn = x;
			}
		}
	}

	cout << mn + mx;

	return EXIT_SUCCESS;
}
