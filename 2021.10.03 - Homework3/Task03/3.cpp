#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 1;
	int c = 0;
	int l = 1;
	cin >> n;

	while (i <= n)
	{
		cout << i << " ";
		if (i == c + l)
		{
			cout << endl;
			c++;
			l += c;
		}
		i++;
	}

	return EXIT_SUCCESS;
}