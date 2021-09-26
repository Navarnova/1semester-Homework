#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	cin >> m >> n;

	int x = 0;
	int y = 0;
	cin >> x >> y;

	if (x > 1)
	{
		cout << x - 1 << " " << y << endl;
	}
	else if (x < n)
	{
		cout << x + 1 << " " << y << endl;
	}
	else if (y > 1)
	{
		cout << x << " " << y - 1 << endl;
	}
	else if (y < n)
	{
		cout << x << " " << y + 1 << endl;
	}

	return EXIT_SUCCESS;
}