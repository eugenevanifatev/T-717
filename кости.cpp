#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
void whowin(int a, int b)
{
	if (a>b)
		cout << "Âû âûèãðàëè!" << endl;
	if(b>a)
		cout << "Êîìïüþòåð îäåðæàë ïîáåäó!" << endl;
	if (a == b)
		cout << "Íè÷üÿ!" << endl;
}
void firstmove(int a, int b)
{
	cout << "Ó âàñ âûïàëî: " << a << endl;
	cout << "Ó êîìïüþòåðà âûïàëî: " << b << endl;
	if (a>b)
	{
		cout << "Âû êèäàåòå ïåðâûì!" << endl;
	}
	if (a<b)
	{
		cout << "Ïåðâûé êèäàåò êîìïüþòåð!" << endl;
	}
	if (a == b)
	{
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "Èäåò ïåðåáðîñ..." << endl;
		Sleep(1500);
		cout << "Ó âàñ âûïàëî: " << a << endl;
		cout << "Ó êîìïüþòåðà âûïàëî: " << b << endl;
		if (a>b)
		{
			cout << "Âû êèäàåòå ïåðâûì!" << endl;
		}
		if (a<b)
		{
			cout << "Ïåðâûé êèäàåò êîìïüþòåð!" << endl;
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
void drowtwice(int a, int b, int &s1,int &s2)
{
	if (a>b) {
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "Âû êèäàåòå êóáèê..." << endl;
		Sleep(1500);
		cout << "Ó âàñ âûïàëî: " << a << endl;
		cubiki(a);
		Sleep(1500);
		cout << "Êîìïüþòåð êèäàåò êóáèê..." << endl;
		Sleep(1500);
		cout << "Ó êîìïüþòåðà âûïàëî: " << b << endl;
		cubiki(b);
		s1=s1+a;
		s2=s2+b;
		whowin(a, b);
	}
	else if (a == b)
	{
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		if (a>b) {
			cout << "Âû êèäàåòå êóáèê..." << endl;
			Sleep(1500);
			cout << "Ó âàñ âûïàëî: " << a << endl;
			cubiki(a);
			Sleep(1500);
			cout << "Êîìïüþòåð êèäàåò êóáèê..." << endl;
			Sleep(1500);
			cout << "Ó êîìïüþòåðà âûïàëî: " << b << endl;
			cubiki(b);
			s1=s1+a;
			s2=s2+b;
			whowin(a, b);
		}
		if (b>a) {
			cout << "Êîìïüþòåð êèäàåò êóáèê..." << endl;
			Sleep(1500);
			cout << "Ó êîìïüþòåðà âûïàëî:" << b << endl;
			cubiki(b);
			Sleep(1500);
			cout << "Âû êèäàåòå êóáèê..." << endl;
			Sleep(1500);
			cout << "Ó âàñ âûïàëî:" << a << endl;
			cubiki(a);
			s1=s1+b;
			s2=s2+a;
			whowin(a, b);
		}
	}
	else {
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "Êîìïüþòåð êèäàåò êóáèê..." << endl;
		Sleep(1500);
		cout << "Ó êîìïüþòåðà âûïàëî:" << b << endl;
		cubiki(b);
		Sleep(1500);
		cout << "Âû êèäàåòå êóáèê..." << endl;
		Sleep(1500);
		cout << "Ó âàñ âûïàëî:" << a << endl;
		cubiki(a);
		s1=s1+b;
		s2=s2+a;
		whowin(a, b);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	int comp;
	int igrok;
	int sum1=0;
	int sum2=0;

	time_t t;
	srand((unsigned)time(&t));
	igrok = rand() % 6 + 1;
	comp = rand() % 6 + 1;
	cout << "Ïðîèçâîäÿòñÿ ïåðâûå áðîñêè äëÿ íà÷àëà èãðû..." << endl;
	Sleep(2000);
	firstmove(igrok, comp);
	cout << endl;
	cout << "//////////////Ïåðâûé ðàóíä!//////////////" << endl;
	drowtwice(igrok, comp,sum1,sum2);
	Sleep(1500);
	cout << endl;
	cout << "//////////////Âòîðîé ðàóíä!//////////////" << endl;
	drowtwice(igrok, comp,sum1,sum2);
	Sleep(1500);
	cout << endl;
	cout << "//////////////Òðåòèé ðàóíä!//////////////" << endl;
	drowtwice(igrok, comp,sum1,sum2);
	Sleep(1500);
	cout << endl;
	cout << "//////////////×åòâåðòûé ðàóíä!//////////////" << endl;
	drowtwice(igrok, comp,sum1,sum2);
	Sleep(1500);
	cout << endl;
	cout << "Îáùèé ñ÷åò âàøèõ î÷êîâ: "<<sum2<<endl;
	cout << "Очки компьютера: "<<sum1<<endl;

	system("pause");
	return 0;
}
