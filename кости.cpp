#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
void sum(int a, int b)
{
	int s1 = 0;
	int s2 = 0;
	for (int i = a; i <= a; i++)
	{
		s1 = s1 + i;
	}
	for (int i = b; i <= b; i++)
	{
		s2 = s2 + i;
	}
	cout << "Ваша сумма значений: " << s1 << endl;
	cout << "Значение компьютера: " << s2 << endl;
}
void whowin(int a, int b)
{
	if (a>b)
		cout << "Вы выиграли!" << endl;
	if(b>a)
		cout << "Компьютер одержал победу!" << endl;
	if (a == b)
		cout << "Ничья!" << endl;
}
void firstmove(int a, int b)
{
	cout << "У вас выпало: " << a << endl;
	cout << "У компьютера выпало: " << b << endl;
	if (a>b)
	{
		cout << "Вы кидаете первым!" << endl;
	}
	if (a<b)
	{
		cout << "Первый кидает компьютер!" << endl;
	}
	if (a == b)
	{
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "Идет переброс..." << endl;
		Sleep(1500);
		cout << "У вас выпало: " << a << endl;
		cout << "У компьютера выпало: " << b << endl;
		if (a>b)
		{
			cout << "Вы кидаете первым!" << endl;
		}
		if (a<b)
		{
			cout << "Первый кидает компьютер!" << endl;
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
		cout << "|    @    |" << endl;
		cout << "|         |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 2:
	{
		cout << "-----------" << endl;
		cout << "|       @ |" << endl;
		cout << "|         |" << endl;
		cout << "| @       |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 3:
	{
		cout << "-----------" << endl;
		cout << "|       @ |" << endl;
		cout << "|    @    |" << endl;
		cout << "| @       |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 4:
	{
		cout << "-----------" << endl;
		cout << "| @     @ |" << endl;
		cout << "|         |" << endl;
		cout << "| @     @ |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 5:
	{
		cout << "-----------" << endl;
		cout << "| @     @ |" << endl;
		cout << "|    @    |" << endl;
		cout << "| @     @ |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 6:
	{
		cout << "-----------" << endl;
		cout << "| @     @ |" << endl;
		cout << "| @     @ |" << endl;
		cout << "| @     @ |" << endl;
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
		cout << "Вы кидаете кубик..." << endl;
		Sleep(1500);
		cout << "У вас выпало: " << a << endl;
		cubiki(a);
		Sleep(1500);
		cout << "Компьютер кидает кубик..." << endl;
		Sleep(1500);
		cout << "У компьютера выпало: " << b << endl;
		cubiki(b);
		whowin(a, b);
		sum(a, b);
	}
	else if (a == b)
	{
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		if (a>b) {
			cout << "Вы кидаете кубик..." << endl;
			Sleep(1500);
			cout << "У вас выпало: " << a << endl;
			cubiki(a);
			Sleep(1500);
			cout << "Компьютер кидает кубик..." << endl;
			Sleep(1500);
			cout << "У компьютера выпало: " << b << endl;
			cubiki(b);
			whowin(a, b);
			sum(a, b);
		}
		if (b>a) {
			cout << "Компьютер кидает кубик..." << endl;
			Sleep(1500);
			cout << "У компьютера выпало:" << b << endl;
			cubiki(b);
			Sleep(1500);
			cout << "Вы кидаете кубик..." << endl;
			Sleep(1500);
			cout << "У вас выпало:" << a << endl;
			cubiki(a);
			whowin(a, b);
			sum(a, b);
		}
	}
	else {
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "Компьютер кидает кубик..." << endl;
		Sleep(1500);
		cout << "У компьютера выпало:" << b << endl;
		cubiki(b);
		Sleep(1500);
		cout << "Вы кидаете кубик..." << endl;
		Sleep(1500);
		cout << "У вас выпало:" << a << endl;
		cubiki(a);
		whowin(a, b);
		sum(a, b);
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
	cout << "Производятся первые броски для начала игры..." << endl;
	Sleep(2000);
	firstmove(igrok, comp);
	cout << endl;
	cout << "//////////////Первый раунд!//////////////" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "//////////////Второй раунд!//////////////" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "//////////////Третий раунд!//////////////" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "//////////////Четвертый раунд!//////////////" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "Общий счет ваших очков: "<< endl;

	system("pause");
	return 0;
}