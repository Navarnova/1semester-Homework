#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int mn = 0;
	int mx = 0;
	int n = 0;
	int a[1000];

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	mn = a[0];
	mx = a[0];
	for (int i = 0; i < n; i++)
	{
		if (mn > a[i])
		{
			mn = a[i];
		}

		if (mx < a[i])
		{
			mx = a[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] == mx)
		{
			a[i] = mn;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}