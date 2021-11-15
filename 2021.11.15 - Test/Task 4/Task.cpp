#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int MN = 1000;
	int n = 0;
	int a[MN];
	
	do
	{
		cin >> n;
	} while (n < 2 || n > 1000);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int mx = a[0];
	int mn = a[0];
	for (int i = 0; i < n; i++)
	{
		if (mx < a[i])
		{
			mx = a[i];
		}
		if (mn > a[i])
		{
			mn = a[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] == mx)
		{
			a[i] = mn;
		}
		cout << a[i] << ' ';
	}
	cout << endl;

	return EXIT_SUCCESS;
}