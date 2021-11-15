#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int mx = -10000;
	int mn = 10000;
	int k = 0;
	int a = 0;

	while (cin >> a)
	{
		k += 1;
		if (k % 2 == 0)
		{
			if (mx < a)
			{
				mx = a;
			}
		}
		else
		{
			if (mn > a)
			{
				mn = a;
			}
		}
	}
	cout << mn + mx << endl;

	return EXIT_SUCCESS;
}