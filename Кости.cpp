#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;


int ThrowDice() {
	int res = rand() % 6 + 1;
	cout << "Выпало " << res << endl;
	switch (res) {
	case 1:
		cout << " _______\n|       |\n|       |\n|   @   |\n|       |\n|_______|\n";
		break;
	case 2:
		cout << " _______\n|       |\n|       |\n| @   @ |\n|       |\n|_______|\n";
		break;
	case 3:
		cout << " _______\n|       |\n|@      |\n|   @   |\n|      @|\n|_______|\n";
		break;
	case 4:
		cout << " _______\n|       |\n| @   @ |\n|       |\n| @   @ |\n|_______|\n";
		break;
	case 5:
		cout << " _______\n|       |\n|@     @|\n|   @   |\n|@     @|\n|_______|\n";
		break;
	case 6:
		cout << " _______\n|       |\n| @ @ @ |\n|       |\n| @ @ @ |\n|_______|\n";
		break;
	}
	return res;
}
void CompareFull(int a, int b, string A, string B, int i) {
	cout << A << " набрал " << a << " очков" << endl;
	cout << B << " набрал " << b << " очков" << endl;
	if (i == 3) {
		if (a>b) cout << A << " выиграл!" << endl;
		else if (a<b) cout << B << " выиграл!" << endl;
		else cout << "Ничья!" << endl;
	}
	else {
		if (a>b) cout << A << " выигрывает" << endl;
		else if (a<b) cout << B << " выигрывает" << endl;
		else cout << "Игроки идут на равне" << endl;
	}
}
int ChoseFirst() {
	return rand() % 2;
}

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int fullResult1 = 0;
	int fullResult2 = 0;

	string player1;
	string player2;

	if (ChoseFirst()) {
		player1 = "Компьютер";
		player2 = "Человек";
	}
	else {
		player1 = "Человек";
		player2 = "Компьютер";
	}
	cout << "Первый ходит - " << player1 << endl;
	cout << "Второй ходит - " << player2 << endl;

	for (int i = 0; i < 4; i++) {
		cout << "########################################################################" << endl;
		cout << "Ход №" << i << endl;
		cout << player1 << " бросает кубик" << endl;
		fullResult1 = fullResult1 + ThrowDice();
		cout << player2 << " бросает кубик" << endl;
		fullResult2 = fullResult2 + ThrowDice();
		CompareFull(fullResult1, fullResult2, player1, player2, i);
		cout << "########################################################################" << endl;
		system("pause");
	}
}


