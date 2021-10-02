#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int sum = 0;
	cin >> n;

	while (n != 0)
	{
		cin >> k;
		sum += k;
		n -= 1;
	}
	cout << sum << endl;

	return EXIT_SUCCESS;
}