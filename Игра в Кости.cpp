#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
void itog(int a, int b)
{
	if (a>b)
		cout << "Вы Выиграли. Выигрышь есть, можно поесть!" << endl;
	if(b>a)
		cout << "Компьютер одержал победу, бегите из казино!" << endl;
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
void anim(int a)
{
	switch (a)
	{
	case 1:
	{
		cout << "-----------" << endl;
		cout << "|         |" << endl;
		cout << "|    O    |" << endl;
		cout << "|         |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 2:
	{
		cout << "-----------" << endl;
		cout << "|       O |" << endl;
		cout << "|         |" << endl;
		cout << "| O       |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 3:
	{
		cout << "-----------" << endl;
		cout << "|       O |" << endl;
		cout << "|    O    |" << endl;
		cout << "| O       |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 4:
	{
		cout << "-----------" << endl;
		cout << "| O     O |" << endl;
		cout << "|         |" << endl;
		cout << "| O     O |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 5:
	{
		cout << "-----------" << endl;
		cout << "| O     O |" << endl;
		cout << "|    O    |" << endl;
		cout << "| O     O |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 6:
	{
		cout << "-----------" << endl;
		cout << "| O     O |" << endl;
		cout << "| O     O |" << endl;
		cout << "| O     O |" << endl;
		cout << "-----------" << endl;
		break;
	}
	}
}
void drowtwice(int a, int b, int &c, int &d)
{
	if (a>b) {
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "Вы кидаете кубик..." << endl;
		Sleep(1500);
		cout << "У вас выпало: " << a << endl;
		anim(a);
		Sleep(1500);
		cout << "Компьютер кидает кубик..." << endl;
		Sleep(1500);
		cout << "У компьютера выпало: " << b << endl;
		anim(b);
		c=c+a;
		d=d+b;
		itog(a, b);
		
	}
	else if (a == b)
	{
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		if (a>b) {
			cout << "Вы кидаете кубик..." << endl;
			Sleep(1500);
			cout << "У вас выпало: " << a << endl;
			anim(a);
			Sleep(1500);
			cout << "Компьютер кидает кубик..." << endl;
			Sleep(1500);
			cout << "У компьютера выпало: " << b << endl;
			anim(b);
			c=c+a;
		d=d+b;
			itog(a, b);
			
		}
		if (b>a) {
			cout << "Компьютер кидает кубик..." << endl;
			Sleep(1500);
			cout << "У компьютера выпало:" << b << endl;
			anim(b);
			Sleep(1500);
			cout << "Вы кидаете кубик..." << endl;
			Sleep(1500);
			cout << "У вас выпало:" << a << endl;
			anim(a);
			c=c+b;
			d=d+a;
			itog(a, b);
			
		}
	}
	else {
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "Компьютер кидает кубик..." << endl;
		Sleep(1500);
		cout << "У компьютера выпало:" << b << endl;
		anim(b);
		Sleep(1500);
		cout << "Вы кидаете кубик..." << endl;
		Sleep(1500);
		cout << "У вас выпало:" << a << endl;
		anim(a);
			c=c+b;
		d=d+a;
		itog(a, b);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int comp;
	int igrok;

	time_t t;
	srand((unsigned)time(&t));
	int sum1 = 0;
	int sum2 = 0;
	igrok = rand() % 6 + 1;
	comp = rand() % 6 + 1;
	cout<< "Добро пожаловать в казино Зеленый ВулкаН-МАХВЕТ777"<<endl; 
	cout << "Производятся первые броски для жеребьевки..." << endl;
	Sleep(2000);
	firstmove(igrok, comp);
	cout << endl;
	cout << "////////////////Первый ход!\\\\\\\\\\\\\\\\" << endl;
	drowtwice(igrok, comp, sum1, sum2);
	Sleep(1500);
	cout << endl;
	cout << "////////////////Второй ход!\\\\\\\\\\\\\\\\" << endl;
	drowtwice(igrok, comp,sum1, sum2);
	Sleep(1500);
	cout << endl;
	cout << "////////////////Третий ход!\\\\\\\\\\\\\\\\" << endl;
	drowtwice(igrok, comp,sum1, sum2);
	Sleep(1500);
	cout << endl;
	cout << "////////////////Четвертый ход!\\\\\\\\\\\\\\\\" << endl;
	drowtwice(igrok, comp,sum1, sum2);
	Sleep(1500);
	cout << endl;
	cout << "Общий счет очков компьютера: "<< sum1 << endl;
	cout << "Общий счет ваших очков: "<< sum2 << endl;
	system("pause");
	return 0;
}