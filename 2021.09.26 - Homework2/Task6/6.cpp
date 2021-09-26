#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int sr1 = 0;
	int sb1 = 0;
	cin >> sr1 >> sb1;

	int sr2 = 0;
	int sb2 = 0;
	cin >> sr2 >> sb2;

	if (sr1 == sr2 || sb1 == sb2)
	{
		cout << "YES" << endl;
	}
	else if (abs(sr1 - sr2) == abs(sb1 - sb2))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return EXIT_SUCCESS;
}