#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int f = 1;
	cin >> n;

	while (n != 0)
	{
		f *= n;
		n -= 1;
	}
	cout << f << endl;

	return EXIT_SUCCESS;
}