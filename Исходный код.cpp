#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void main()
{
	setlocale (LC_ALL, "Russian");
	srand(time(NULL));
	int N;
	int g = 0;
	cout << "����� ���������� � ��������� ������. ���� � ��� ���� �������� �� ��� �������!"<<endl;
	cout << "���� �� ������, ����� � ����� ������ ���� ������ ����� ������� 0!\n";
	cout << "���� �� ������, ����� � ����� ������ ���� ������ ����� ������� 1!\n";
	cout << "���� �� ������, ����� � ����� ������ ���� � ����� � ����� ������� 2!\n";
	cin >> g;
	cout << "������� ����� ������:\n";
	cin>> N;
	char *pass = new char[N + 1];
	for (int i = 0; i<N; ++ i)
		switch (g)
	{
		case 0: 
			pass[i] = rand() % 10 + '0';
			break;
		case 1:
			pass[i] = rand() % 26 + 'A';
		break;
		case 2:
	{
		switch(rand()% 3)
		{
		case 0:
			pass[i] = rand() % 10 + '0';
			break;
		case 1:
			pass[i] = rand() % 26 + 'A';
			break;
		case 2:
			pass[i] = rand() % 26 + 'a';
		}
	}
	}
	pass[N] = 0;
	cout << pass<< endl;
	system ("pause");
}