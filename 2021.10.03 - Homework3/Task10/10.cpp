#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;

	for (int n = a; n <= b; ++n)
	{
		if (sqrt(n) == (int)sqrt(n))
		{
			cout << n << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}