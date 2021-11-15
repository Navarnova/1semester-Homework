#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int a1 = 0;
	int b = 0;
	int b1 = 0;
	int nod = 0;
	int nok = 0;
	cin >> a >> b;
	a1 = a;
	b1 = b;

	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	nod = a;

	nok = (a1 * b1) / nod;
	cout << nok << endl;

	return EXIT_SUCCESS;
}