#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k >> m >> n;

	if (n <= k)
	{
		cout << 2 * m << endl;
	}
	else if ((n * 2) % k == 0)
	{
		cout << m * ((n * 2) / k) << endl;
	}
	else
	{
		cout << m * (1 + (n * 2) / k) << endl;
	}

	return EXIT_SUCCESS;
}