#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;

void whowin(int a, int b)
{
	if (a>b)
		cout << "�� ��������!" << endl;
	if(b>a)
		cout << "������� ���������!" << endl;
	if (a == b)
		cout << "�����!" << endl;
}
void firstmove(int a, int b)
{
	cout << "� ��� ������: " << a << endl;
	cout << "� ���������� ������: " << b << endl;
	if (a>b)
	{
		cout << "�� ������� ������!" << endl;
	}
	if (a<b)
	{
		cout << "������ ������ ���������!" << endl;
	}
	if (a == b)
	{
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "���� �������� �������!..." << endl;
		Sleep(1500);
		cout << "� ��� ������: " << a << endl;
		cout << "� ���������� ������: " << b << endl;
		if (a>b)
		{
			cout << "�� ������� ������!" << endl;
		}
		if (a<b)
		{
			cout << "������ ������ ���������!" << endl;
		}
	}
}
void cubiki(int a)
{
	switch (a)
	{
	case 1:
	{
		cout << "-----------" << endl;
		cout << "|         |" << endl;
		cout << "|    0    |" << endl;
		cout << "|         |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 2:
	{
		cout << "-----------" << endl;
		cout << "|       0 |" << endl;
		cout << "|         |" << endl;
		cout << "| 0       |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 3:
	{
		cout << "-----------" << endl;
		cout << "|       0 |" << endl;
		cout << "|    0    |" << endl;
		cout << "| 0       |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 4:
	{
		cout << "-----------" << endl;
		cout << "| 0     0 |" << endl;
		cout << "|         |" << endl;
		cout << "| 0     0 |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 5:
	{
		cout << "-----------" << endl;
		cout << "| 0     0 |" << endl;
		cout << "|    0    |" << endl;
		cout << "| 0     0 |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 6:
	{
		cout << "-----------" << endl;
		cout << "| 0     0 |" << endl;
		cout << "| 0     0 |" << endl;
		cout << "| 0     0 |" << endl;
		cout << "-----------" << endl;
		break;
	}
	}
}
void drowtwice(int a, int b)
{
	if (a>b) {
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "�� ������� �����..." << endl;
		Sleep(1500);
		cout << "� ��� ������: " << a << endl;
		cubiki(a);
		Sleep(1500);
		cout << "��������� ������ �����..." << endl;
		Sleep(1500);
		cout << "� ���������� ������: " << b << endl;
		cubiki(b);
		whowin(a, b);
	}
	else if (a == b)
	{
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		if (a>b) {
			cout << "�� ������� �����..." << endl;
			Sleep(1500);
			cout << "� ��� ������: " << a << endl;
			cubiki(a);
			Sleep(1500);
			cout << "��������� ������ �����..." << endl;
			Sleep(1500);
			cout << "� ���������� ������: " << b << endl;
			cubiki(b);
			whowin(a, b);
		}
		if (b>a) {
			cout << "��������� ������ �����..." << endl;
			Sleep(1500);
			cout << "� ���������� ������:" << b << endl;
			cubiki(b);
			Sleep(1500);
			cout << "�� ������� �����..." << endl;
			Sleep(1500);
			cout << "� ��� ������:" << a << endl;
			cubiki(a);
			whowin(a, b);
		}
	}
	else {
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "��������� ������ �����..." << endl;
		Sleep(1500);
		cout << "� ���������� ������:" << b << endl;
		cubiki(b);
		Sleep(1500);
		cout << "�� ������� �����..." << endl;
		Sleep(1500);
		cout << "� ��� ������:" << a << endl;
		cubiki(a);
		whowin(a, b);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	int comp;
	int igrok;

	time_t t;
	srand((unsigned)time(&t));
	igrok = rand() % 6 + 1;
	comp = rand() % 6 + 1;
	cout << "������������ ������ ������ ��� ������ ����..." << endl;
	Sleep(2000);
	firstmove(igrok, comp);
	cout << endl;
	cout << "-------------������ �����!--------------" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "-------------������ �����!-------------" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "-------------������ �����!------------" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "-------------��������� �����!-----------" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "����� ���� ����� �����: "<< endl;

	system("pause");
	return 0;
}