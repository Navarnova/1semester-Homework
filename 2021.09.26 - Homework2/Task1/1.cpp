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
		cout << "���" << " ";
		break;
	case 2:
		cout << "������" << " ";
		break;
	case 3:
		cout << "������" << " ";
		break;
	case 4:
		cout << "���������" << " ";
		break;
	case 5:
		cout << "�������" << " ";
		break;
	case 6:
		cout << "��������" << " ";
		break;
	case 7:
		cout << "�������" << " ";
		break;
	case 8:
		cout << "���������" << " ";
		break;
	case 9:
		cout << "���������" << " ";
		break;
	default:
		break;
	}

	switch (d)
	{
	case 10:
		cout << "������" << " ";
		break;
	case 11:
		cout << "�����������" << " ";
		break;
	case 12:
		cout << "����������" << " ";
		break;
	case 13:
		cout << "����������" << " ";
		break;
	case 14:
		cout << "������������" << " ";
		break;
	case 15:
		cout << "����������" << " ";
		break;
	case 16:
		cout << "�����������" << " ";
		break;
	case 17:
		cout << "����������" << " ";
		break;
	case 18:
		cout << "������������" << " ";
		break;
	case 19:
		cout << "������������" << " ";
		break;
	default:
		break;
	}

	switch (b)
	{
	case 2:
		cout << "��������" << " ";
		break;
	case 3:
		cout << "��������" << " ";
		break;
	case 4:
		cout << "�����" << " ";
		break;
	case 5:
		cout << "���������" << " ";
		break;
	case 6:
		cout << "����������" << " ";
		break;
	case 7:
		cout << "���������" << " ";
		break;
	case 8:
		cout << "�����������" << " ";
		break;
	case 9:
		cout << "���������" << " ";
		break;
	default:
		break;
	}

	switch (c)
	{
	case 1:
		cout << "����" << " " << "�����" << endl;
		break;
	case 2:
		cout << "���" << " " << "������" << endl;
		break;
	case 3:
		cout << "���" << " " << "������" << endl;
		break;
	case 4:
		cout << "������" << " " << "������" << endl;
		break;
	case 5:
		cout << "����" << " " << "�������" << endl;
		break;
	case 6:
		cout << "�����" << " " << "�������" << endl;
		break;
	case 7:
		cout << "����" << " " << "�������" << endl;
		break;
	case 8:
		cout << "������" << " " << "�������" << endl;
		break;
	case 9:
		cout << "������" << " " << "�������" << endl;
		break;
	default:
		cout << "�������" << endl;
		break;
	}

	return EXIT_SUCCESS;
}