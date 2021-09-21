#include <iostream>

using namespace std;

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b;
	c = a * (1 % ((a / (b + 1)) + 1)) + b * (1 % ((b / a)  + 1));
	cout << c << endl;

	return EXIT_SUCCESS;
}