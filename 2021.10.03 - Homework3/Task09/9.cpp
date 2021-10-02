#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;

	for (int n = a; n <= b; ++n)
	{
		if (n % d == c)
		{
			cout << n << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}