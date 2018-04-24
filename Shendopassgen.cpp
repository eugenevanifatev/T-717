#include "stdafx.h" 
#include <iostream> 
#include <ctime> 

using namespace std;

void start();
void logic(bool, bool, bool, int);

void start()
{
	bool nums, uppercase, lowercase;
	int size = 0;
	cout << "Введите длину пароля: "; cin >> size;
	cout << "Цифры: "; cin >> nums;
	cout << "Буквы верхнего регистра: "; cin >> uppercase;
	cout << "Буквы нижнего регистра: "; cin >> lowercase;
	logic(nums, uppercase, lowercase, size);
}

void logic(bool num, bool up_case, bool low_case, int pas_size)
{
	char *nums_array = new char[10]{ '0','1','2','3','4','5','6','7','8','9' };

	char *uppercase_array = new char[26]{ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

	char *lowercase_array = new char[26]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	char *nums_uppercase_array = new char[36]{ '0','1','2','3','4','5','6','7','8','9',
		'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

	char *nums_lowercase_array = new char[36]{ '0','1','2','3','4','5','6','7','8','9',
		'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	char *upper_lower_case_array = new char[52]{ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	char *all_symbols_array = new char[62]{ '0','1','2','3','4','5','6','7','8','9',
		'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	bool nums = num, uppercase = up_case, lowercase = low_case;
	int password_size = pas_size;
	char *password = new char[password_size];

	while ((nums == false) && (uppercase == false) && (lowercase == false))
	{
		cout << "Выберите хотя бы 1 вид символов!" << endl;
		start();
	}

	cout << "Ваш пароль: ";
	for (int i = 0; i < password_size; i++)
	{
		if ((nums == true) && (uppercase == true) && (lowercase == true))
		{
			password[i] = all_symbols_array[rand() % 62];
		}

		if (nums == false)
		{
			if ((lowercase == true) && (uppercase == true))
				password[i] = upper_lower_case_array[rand() % 52];
			if ((uppercase == false) && (lowercase == true))
				password[i] = lowercase_array[rand() % 26];
			if ((lowercase == false) && (uppercase == true))
				password[i] = uppercase_array[rand() % 26];
		}

		if (uppercase == false)
		{
			if ((lowercase == true) && (nums == true))
				password[i] = nums_lowercase_array[rand() % 36];
			if ((nums == false) && (lowercase == true))
				password[i] = lowercase_array[rand() % 26];
			if ((lowercase == false) && (nums == true))
				password[i] = nums_array[rand() % 10];
		}

		if (lowercase == false)
		{
			if ((uppercase == true) && (nums == true))
				password[i] = nums_uppercase_array[rand() % 36];
			if ((nums == false) && (uppercase == true))
				password[i] = uppercase_array[rand() % 26];
			if ((uppercase == false) && (nums == true))
				password[i] = nums_array[rand() % 10];
		}

		cout << password[i];
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	start();
	system("pause");
	return 0;
}