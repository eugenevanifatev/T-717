// PasGen.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <ctime>

using std::endl;
using std::cout;
using std::cin;
void Generator(bool, bool, bool, bool, int);
void GetPassword();

void Generator(bool num, bool BigLetters, bool SmallLetters, int all)
{
	char *nums_case = new char[10]{ '0','1','2','3','4','5','6','7','8','9' };

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

	bool nums = num, uppercase = BigLetters, lowercase = SmallLetters;
	int password_size =all;
	char *password = new char[password_size];

	while ((nums == false) && (uppercase == false) && (lowercase == false))
	{
		cout << "Выберите хотя бы 1 вид пароля" << endl;
		GetPassword();
	}

	cout << "Сгенерированный пароль: ";
	for (int i = 0; i < password_size; i++)
	{
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
				password[i] = nums_case[rand() % 10];
		}

		if (lowercase == false)
		{
			if ((uppercase == true) && (nums == true))
				password[i] = nums_uppercase_array[rand() % 36];
			if ((nums == false) && (uppercase == true))
				password[i] = uppercase_array[rand() % 26];
			if ((uppercase == false) && (nums == true))
				password[i] = nums_case[rand() % 10];
		}
		if ((nums == true) && (uppercase == true) && (lowercase == true))
		{
				password[i] = all_symbols_array[rand() % 62];
		}
		cout << password[i];
	}
	cout << endl;
}
void GetPassword()
{
	int nums, big, small, all;
	int size = 0;
	cout << "Введите длину пароля: ";
	cin >> size;
	cout << "Для выбора нужных символов в пароле нажмите 1, иначе 0:" << endl;
	cout << "Цифры: ";
	cin >> nums;
	cout << "Буквы верхнего регистра: ";
	cin >> big;
	cout << "Буквы нижнего регистра: ";
	cin >> small;
	Generator(nums, big, small, size);
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	GetPassword();
	system("pause");
	return 0;
}