#include "myLib.h"

int c = 0;
int f(int n)
{
	if ((n % 2 != 0) && (n != 1))
	{
		c++;
		return f(3 * n + 1);
	}
	else if (n % 2 == 0)
	{
		c++;
		return f(n / 2);
	}
	if (n == 1)
	{
		return c;
	}
}