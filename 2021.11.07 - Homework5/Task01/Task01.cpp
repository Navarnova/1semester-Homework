#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	unsigned int n = 0;
	unsigned int x1 = 0;
	unsigned int x2 = 0;
	unsigned int i = 0;
	unsigned int r = 0;

	cin >> n >> x1 >> x2;

	for (int j = 0; j < sizeof(int) * 8; ++j)
	{
		int cBit = (sizeof(int) * 8 - 1 - j);
		int bMask = 1 << cBit;
		int bit = n & bMask;

		bit = bit >> cBit;

		cout << bit;
		if ((j + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;

	unsigned int bit1 = (n >> x1) & 1;
	unsigned int bit2 = (n >> x2) & 1;

	i = bit1 ^ bit2;
	i = (i << x1) | (i << x2);

	r = n ^ i;
	for (int j = 0; j < sizeof(int) * 8; ++j)
	{
		int cBit = (sizeof(int) * 8 - 1 - j);
		int bMask = 1 << cBit;
		int bit = r & bMask;

		bit = bit >> cBit;

		cout << bit;
		if ((j + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;
	
	return EXIT_SUCCESS;
}