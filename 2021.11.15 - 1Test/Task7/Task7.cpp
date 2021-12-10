#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	int p1 = 0;
	int p2 = 0;
	cin >> x1 >> y1 >> x2 >> y2;

	if ((x1 % 2 == 1 && y1 % 2 == 1) || (x1 % 2 == 0 && y1 % 2 == 0))
	{
		p1 = 1;
	}
	else
	{
		p1 = 0;
	}
	
	if ((x2 % 2 == 1 && y2 % 2 == 1) || (x2 % 2 == 0 && y2 % 2 == 0))
	{
		p2 = 1;
	}
	else
	{
		p2 = 0;
	}

	if (p1 == p2)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return EXIT_SUCCESS;
}