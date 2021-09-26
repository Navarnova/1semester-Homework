#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> n;

	a = n / 100;
	if ((n % 100) / 10 == 1)
	{
		d = n % 100;
	}
	else
	{
		b = (n % 100) / 10;
		c = n % 10;
	}
	
	switch (a)
	{
	case 1:
		cout << "сто" << " ";
		break;
	case 2:
		cout << "двести" << " ";
		break;
	case 3:
		cout << "триста" << " ";
		break;
	case 4:
		cout << "четыреста" << " ";
		break;
	case 5:
		cout << "пятьсот" << " ";
		break;
	case 6:
		cout << "шестьсот" << " ";
		break;
	case 7:
		cout << "семьсот" << " ";
		break;
	case 8:
		cout << "восемьсот" << " ";
		break;
	case 9:
		cout << "девятьсот" << " ";
		break;
	default:
		break;
	}

	switch (d)
	{
	case 10:
		cout << "десять" << " ";
		break;
	case 11:
		cout << "одиннадцать" << " ";
		break;
	case 12:
		cout << "двенадцать" << " ";
		break;
	case 13:
		cout << "тринадцать" << " ";
		break;
	case 14:
		cout << "четырнадцать" << " ";
		break;
	case 15:
		cout << "пятнадцать" << " ";
		break;
	case 16:
		cout << "шестнадцать" << " ";
		break;
	case 17:
		cout << "семнадцать" << " ";
		break;
	case 18:
		cout << "восемнадцать" << " ";
		break;
	case 19:
		cout << "девятнадцать" << " ";
		break;
	default:
		break;
	}

	switch (b)
	{
	case 2:
		cout << "двадцать" << " ";
		break;
	case 3:
		cout << "тридцать" << " ";
		break;
	case 4:
		cout << "сорок" << " ";
		break;
	case 5:
		cout << "пятьдесят" << " ";
		break;
	case 6:
		cout << "шестьдесят" << " ";
		break;
	case 7:
		cout << "семьдесят" << " ";
		break;
	case 8:
		cout << "восемьдесят" << " ";
		break;
	case 9:
		cout << "девяносто" << " ";
		break;
	default:
		break;
	}

	switch (c)
	{
	case 1:
		cout << "один" << " " << "банан" << endl;
		break;
	case 2:
		cout << "два" << " " << "банана" << endl;
		break;
	case 3:
		cout << "три" << " " << "банана" << endl;
		break;
	case 4:
		cout << "четыре" << " " << "банана" << endl;
		break;
	case 5:
		cout << "пять" << " " << "бананов" << endl;
		break;
	case 6:
		cout << "шесть" << " " << "бананов" << endl;
		break;
	case 7:
		cout << "семь" << " " << "бананов" << endl;
		break;
	case 8:
		cout << "восемь" << " " << "бананов" << endl;
		break;
	case 9:
		cout << "девять" << " " << "бананов" << endl;
		break;
	default:
		cout << "бананов" << endl;
		break;
	}

	return EXIT_SUCCESS;
}