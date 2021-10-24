#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int MN = 100;
	int n = 0;
	int a[MN];
	do
	{
		cin >> n;
	} while (n < 1 || n > 100);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int sum = 0;
	int prn = 1;

	cout << "ARRAY : ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
		sum += a[i];
		if (a[i] < 0)
		{
			prn *= a[i];
		}
	}
	cout << endl;

	cout << "EVEN : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	cout << "SUM : " << sum << endl;
	cout << "PRODUCT OF NEGATIVE : " << prn << endl;

	int mn = a[0];
	int inmn = 0;
	for (int i = 0; i < n; i++)
	{
		if (mn > a[i])
		{
			mn = a[i];
			inmn = i;
		}
	}
	cout << "FIRST MIN INDEX : " << inmn << endl;

	int mx = a[0];
	int smx = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > mx)
		{
			smx = mx;
			mx = a[i];
		}
	}
	cout << "SECOND MAX : " << smx << endl;

	cout << "REVERSE : ";
	for (int i = n - 1; i > -1; i -= 1)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "ODD INDEXES : ";
	for (int i = 1; i < n; i += 2)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}