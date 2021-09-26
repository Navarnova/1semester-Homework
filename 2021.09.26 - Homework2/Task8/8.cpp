#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	float s = 0;
	cin >> a >> b >> c;

	if (a >= b && a >= c)
	{
		s = (float)((b * b + c * c - a * a) / (2 * b * c));
		if (s == 0)
		{
			cout << "right" << endl;
		}
		else if (s > 0)
		{
			cout << "acute" << endl;
		}
		else
		{
			cout << "obtuse" << endl;
		}
	}
	else if (b >= a && b >= c)
	{
		s = (float)((a * a + c * c - b * b) / (2 * a * c));
		if (s == 0)
		{
			cout << "right" << endl;
		}
		else if (s > 0)
		{
			cout << "acute" << endl;
		}
		else
		{
			cout << "obtuse" << endl;
		}
	}
	else
	{
		s = (float)((b * b + a * a - c * c) / (2 * b * a));
		if (s == 0)
		{
			cout << "right" << endl;
		}
		else if (s > 0)
		{
			cout << "acute" << endl;
		}
		else
		{
			cout << "obtuse" << endl;
		}
	}

	return EXIT_SUCCESS;
}