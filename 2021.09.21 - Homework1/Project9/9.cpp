#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int t = 0;
	cin >> x;
	t = x * x;
	cout << (t + x) * (t + 1) + 1 << endl;

	return EXIT_SUCCESS;
}