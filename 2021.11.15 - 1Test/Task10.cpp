#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int mx = 0;
	int a[1000];
	int d[1000];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int j = 1; j < n - 1; j++)
	{
		for (int i = 1; i < n - 1; i++)
		{
			d[i] = a[j - 1] + a[j] + a[j + 1];
		}
	}
	d[0] = a[n - 1] + a[0] + a[1];
	d[n - 1] = a[n - 2] + a[n - 1] + a[0];

	mx = d[1];
	for (int i = 0; i < n; i++)
	{
		if (mx < d[i])
		{
			mx = d[i];
		}
	}
	cout << mx << endl;

	return EXIT_SUCCESS;
}
