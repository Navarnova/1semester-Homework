#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;

	for (int c = 1; c <= n / 2; ++c)
	{
		if (n % c == 0)
		{
			cout << c << " ";
		}
	}

	cout << n << endl;

	return EXIT_SUCCESS;
}