#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int m = 0;
	int d = 0;
	int b = 0;
	cin >> k;
	b = 0;

	const int MK = 1000;
	int l = 0;
	int a[MK];
	do
	{
		l = k;
	} while (l < 1 || l > 1000);

	while (k > 0)
	{
		cin >> n >> m;
		d = 19 * m + (n + 239) * (n + 366) / 2;
		a[b] = d;
		b += 1;
		k -= 1;
	}

	for (int i = 0; i < l; i++)
	{
		cout << a[i] << endl;
	}

	return EXIT_SUCCESS;
}