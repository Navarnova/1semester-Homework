#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double d = 0;

	cin >> d;
	long long j = 1;
	long long n = *((long long*)&d);
	for (long long i = 0; i < sizeof(long long) * 8; ++i)
	{
		long long cBit = (sizeof(long long) * 8 - 1 - i);
		long long bMask = j << cBit;
		long long bit = n & bMask;

		bit = bit >> cBit;

		cout << bit;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}