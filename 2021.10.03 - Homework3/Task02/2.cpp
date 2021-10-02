#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 1;
	cin >> n;

	while (n != 0)
	{
		s *= 2;
		n -= 1;
	}
	cout << s << endl;

	return EXIT_SUCCESS;
}