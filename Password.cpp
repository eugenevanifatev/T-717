#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Generator {
public:
	char *password; 
	int size;
	bool useNum, useBig, useLit;

	/*Конструктор  */
	Generator() {
		cout << "Start" << endl;
		SetStdBool();
		do {			
			changeSet();
			size = GetSize();
			password = new char[size+1];
			GenPass();
			OutputPass();
		} while (YesOrNot("Change password (y/n)?"));
		if (YesOrNot("Put password in txt (y/n)?")) OutputToTxt();
		cout << "End! \n Made by Vadim, Dasha and Karina \nPS. Big brother is watching you\n";
	}


	/*устновка настроек по-умолчанию*/
	void SetStdBool(){
		useNum = true;
		useBig = true;
		useLit = true;
	}
	/*запрос изменения настроек*/
	void changeSet() {		
		if (YesOrNot("Change set (y/n)?")) GetPermit();
	}
	/*изменение настроек*/
	void GetPermit() {
		useNum = YesOrNot("Use numbers (y/n)?");
		useBig = YesOrNot("Use big letters (y/n)?");
		useLit = YesOrNot("Use little letters (y/n)?");
		if (useNum == false && useBig == false && useLit == false) {
			cout << "Error! Please retry\n";
			GetPermit();
		}
	}
	/*Получение размера пароля*/
	int GetSize() {
		int size;
		cout << "Enter size of password: " << endl;
		cin >> size;
		return size;
	};
	/*генератор чисел и букв*/
	char GenAllSymbol() {
		int part = rand() % 3;
		if (part == 0)	return GenNumber();
		else if (part == 1) return GenBig();
		else if (part == 2) return GenLit();
	}
	/*генератор чисел и заглавых букв*/
	char GenNumBig() {
		int part = rand() % 2;
		if (part == 0)	return GenNumber();
		else if (part == 1) return GenBig();
	}
	/*генератор чисел и строчных букв*/
	char GenNumLit() {
		if ((rand() % 2) == 0) return GenNumber();
		else return GenLit();
	}
	/*генератор букв*/
	char GenLitBig() {
		
		if ((rand() % 2) == 0)	return GenBig();
		else return GenLit();
	}
	/*генератор числа*/
	char GenNumber() {
		return rand() % 9 + 48;
	}
	/*генератор заглавных букв*/
	char GenBig() {
		return rand() % 25 + 65;
	}

	char GenLit() {
		return rand() % 25 + 97;
	}
	/*генератор пароля*/
	void GenPass()
	{
		if (useNum == true && useLit == false && useBig == false)
		{
			for (int i = 0; i < size; i++)
			{
				password[i] = GenNumber();
			}

		}
		else if (useNum == true && useLit == true && useBig == false)
		{
			for (int i = 0; i < size; i++)
			{
				password[i] = GenNumLit();
			}
		}
		else if (useNum == true && useLit == false && useBig == true)
		{
			for (int i = 0; i < size; i++)
			{
				password[i] = GenNumBig();
			}
		}
		else if (useNum == false && useLit == true && useBig == false)
		{
			for (int i = 0; i < size; i++)
			{
				password[i] = GenLit();
			}
		}
		else if (useNum == false && useLit == true && useBig == true)
		{
			for (int i = 0; i < size; i++)
			{
				password[i] = GenLitBig();
			}
		}
		else if (useNum == false && useLit == false && useBig == true)
		{
			for (int i = 0; i < size; i++)
			{
				password[i] = GenBig();
			}
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				password[i] = GenAllSymbol();
			}

		}
	};
	/*вывод пароля*/
	void OutputPass() {
		cout << "Password:\t";

		for (int i = 0; i < size; i++)
		{
			cout << password[i];
		}
		cout << endl;
	}
	/*вывод в файл(прототип)*/
	void OutputToTxt(){
		password[size + 1] = '\0';
		FILE *passwordList;
		passwordList = fopen("passwordList.txt", "w");
		fprintf(passwordList, password);
		fclose(passwordList);
	}
	/*механизм "да или нет (для сокращения строк кода)"*/
	bool YesOrNot(string out) {
		cout << out << endl;
		char answer;
		do {
			cin >> answer;
			if (answer == 'y' || answer == 'Y') return true;
			if (answer == 'n' || answer == 'N') return false;
		} while (true);
	}
};

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Eng");
	Generator A;
	system("pause");
	return 0;
}