#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int pol = 0;
	int otr = 0;
	int nul = 0;
	cin >> n;

	while (n != 0)
	{
		cin >> k;
		if (k == 0)
		{
			nul++;
		}
		else if (k > 0)
		{
			pol++;
		}
		else
		{
			otr++;
		}
		n -= 1;
	}
	
	cout << pol << " " << otr << " " << nul << endl;

	return EXIT_SUCCESS;
}