#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;

	cin >> n;

	if (n > 0)
	{
		cout << n << endl;
	}
	else
	{
		cout << (~n + 1) << endl;
	}

	return EXIT_SUCCESS;
}