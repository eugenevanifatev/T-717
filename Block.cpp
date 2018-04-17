#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
void brosanieCubicaIVivodRezultata(bool playre1, bool player2, int *sum1, int *sum2);
int main()
{
	setlocale(0,"");
	int intPlayer1;
	bool player1, player2;
	int summaPervogo1 = 0;
	int *summa1 = &summaPervogo1;
	int summaPervogo2 = 0;
	int *summa2 = &summaPervogo2;
	cout << "Выбираем первого бросающего: "<<endl;
		srand(time(0));
		intPlayer1 = 1 + rand() % 100;
		if (intPlayer1 >= 50)
		{
			cout << "Первый бросает игрок." << endl << "Второй бросает компьютер." << endl;
			player2 = 0;
			player1 = 1;
		}
		else if(intPlayer1 < 50)
		{
			cout << "Первый бросает компьютер." << endl << "Второй бросает игрок." << endl;
			player2 = 1;
			player1 = 0;
		}
	getchar();
	int n;
	cout << "Введите число взбросов: ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		brosanieCubicaIVivodRezultata(player1, player2,summa1,summa2);
		cout << endl;
	}
	cout << "Сумма первого игрока: " << *summa1 << endl;
	cout << "Сумма второго игрока: " << *summa2 << endl;
	if(*summa1>*summa2)
		cout << "Первый игрок выйграл!!!" << endl;
	else
		cout << "Второй игрок выйграл!!!" << endl;
	system("pause");
	return 0;
}
void drawCub(int number)
{
	const int n = 5;
	char cubicSoZnacheniem1[n][n] = { 
		{{ '+' },{ '-' },{ '-' },{ '-' },{ '+' }},
		{{ '|' },{ ' ' },{ ' ' },{ ' ' },{ '|' }},
		{{ '|' },{ ' ' },{ '#' },{ ' ' },{ '|' }},
		{{ '|' },{ ' ' },{ ' ' },{ ' ' },{ '|' }},
		{{ '+' },{ '-' },{ '-' },{ '-' },{ '+' }}
	};
	char cubicSoZnacheniem2[n][n] = {
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } },
		{ { '|' },{ ' ' },{ ' ' },{ '#' },{ '|' } },
		{ { '|' },{ ' ' },{ ' ' },{ ' ' },{ '|' } },
		{ { '|' },{ '#' },{ ' ' },{ ' ' },{ '|' } },
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } }
	};
	char cubicSoZnacheniem3[n][n] = {
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } },
		{ { '|' },{ ' ' },{ ' ' },{ '#' },{ '|' } },
		{ { '|' },{ ' ' },{ '#' },{ ' ' },{ '|' } },
		{ { '|' },{ '#' },{ ' ' },{ ' ' },{ '|' } },
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } }
	};
	char cubicSoZnacheniem4[n][n] = {
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } },
		{ { '|' },{ '#' },{ ' ' },{ '#' },{ '|' } },
		{ { '|' },{ ' ' },{ ' ' },{ ' ' },{ '|' } },
		{ { '|' },{ '#' },{ ' ' },{ '#' },{ '|' } },
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } }
	};
	char cubicSoZnacheniem5[n][n] = {
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } },
		{ { '|' },{ '#' },{ ' ' },{ '#' },{ '|' } },
		{ { '|' },{ ' ' },{ '#' },{ ' ' },{ '|' } },
		{ { '|' },{ '#' },{ ' ' },{ '#' },{ '|' } },
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } }
	};
	char cubicSoZnacheniem6[n][n] = {
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } },
		{ { '|' },{ '#' },{ ' ' },{ '#' },{ '|' } },
		{ { '|' },{ '#' },{ ' ' },{ '#' },{ '|' } },
		{ { '|' },{ '#' },{ ' ' },{ '#' },{ '|' } },
		{ { '+' },{ '-' },{ '-' },{ '-' },{ '+' } }
	};
	switch (number)
	{
	case 1:
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << cubicSoZnacheniem1[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 2:
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << cubicSoZnacheniem2[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 3:
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << cubicSoZnacheniem3[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 4:
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << cubicSoZnacheniem4[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 5:
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << cubicSoZnacheniem5[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 6:
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << cubicSoZnacheniem6[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
	default:
		break;
	}
}
void brosanieCubicaIVivodRezultata(bool playre1, bool player2,int *sum1,int *sum2)
{
	srand(time(0));
	int random_number1, random_number2;
	random_number1 = 1 + rand() %6;
	random_number2 = 1 + rand() %6;
	*sum1 += random_number1;
	*sum2 += random_number2;
	cout << "Первый игрок: " << random_number1 << "\n";
	drawCub(random_number1);
	cout << "Второй игрок: " << random_number2 << "\n";
	drawCub(random_number2);
	system("pause");
}