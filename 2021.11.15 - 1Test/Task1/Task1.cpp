#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int l = 0;
	int n = 0;
	int m = 0;
	int d = 0;
	int const K = 10000;
	int a[K];
	cin >> k;

	while (k > 0)
	{
		cin >> n >> m;
		k -= 1;
		d = 19 * m + (n + 239) * (n + 366) / 2;
		a[l] = d;
		l++;
	}

	for (int i = 0; i < l; i++)
	{
		cout << a[i] << endl;
	}

	return EXIT_SUCCESS;
}