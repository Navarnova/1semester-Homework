#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int a = 0;
	int n1 = 1;
	int k1 = 1;
	int a1 = 1;
	cin >> n >> k;

	a = n - k;

	while (n != 0)
	{
		n1 *= n;
		n -= 1;
	}
	while (k != 0)
	{
		k1 *= k;
		k -= 1;
	}
	while (a != 0)
	{
		a1 *= a;
		a -= 1;
	}

	cout << n1 / (k1 * a1) << endl;

	return EXIT_SUCCESS;
}