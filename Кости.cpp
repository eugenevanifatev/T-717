#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;


int ThrowDice() {
	int res = rand() % 6 + 1;
	cout << "������ " << res << endl;
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
	cout << A << " ������ " << a << " �����" << endl;
	cout << B << " ������ " << b << " �����" << endl;
	if (i == 3) {
		if (a>b) cout << A << " �������!" << endl;
		else if (a<b) cout << B << " �������!" << endl;
		else cout << "�����!" << endl;
	}
	else {
		if (a>b) cout << A << " ����������" << endl;
		else if (a<b) cout << B << " ����������" << endl;
		else cout << "������ ���� �� �����" << endl;
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
		player1 = "���������";
		player2 = "�������";
	}
	else {
		player1 = "�������";
		player2 = "���������";
	}
	cout << "������ ����� - " << player1 << endl;
	cout << "������ ����� - " << player2 << endl;

	for (int i = 0; i < 4; i++) {
		cout << "########################################################################" << endl;
		cout << "��� �" << i << endl;
		cout << player1 << " ������� �����" << endl;
		fullResult1 = fullResult1 + ThrowDice();
		cout << player2 << " ������� �����" << endl;
		fullResult2 = fullResult2 + ThrowDice();
		CompareFull(fullResult1, fullResult2, player1, player2, i);
		cout << "########################################################################" << endl;
		system("pause");
	}
}


