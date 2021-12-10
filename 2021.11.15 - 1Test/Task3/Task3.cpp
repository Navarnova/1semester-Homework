#include <iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int na = 0;
	int nb = 0;
	cin >> a >> b;
	
	na = a;
	nb = b;

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
	cout << (na * nb) / a << endl;

	return EXIT_SUCCESS;
}