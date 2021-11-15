#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int const MN = 300000;
	int n, m = 0;
	int a1[MN], a2[MN];
	int k = 0;
	do
	{
		cin >> n;
	} while (n < 1 || n > 300000);

	do
	{
		cin >> m;
	} while (m < 1 || m > 300000);

	return EXIT_SUCCESS;
}