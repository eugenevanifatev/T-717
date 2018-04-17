// �����������������.cpp: ���������� ����� ����� ��� ����������� ����������.

#include <iostream>
#include <ctime>

using namespace std;

bool order();
void startGame();
void drawing(int);
void outputResult(int, int);

bool order()	//����� ����, ��� ����� ������
{
	cout << "1 - ������ ��!" << endl << "0 - ����� ���������!" << endl;
	bool order;
	cin >> order;
	return order;
}

void startGame()	//����� ����, ������� ����� � ����� �����
{
	int ord = order();

	int n1_1 = 0, n1_2 = 0, n2_1 = 0, n2_2 = 0;
	int sum_1 = 0, sum_2 = 0, mainSum_1 = 0, mainSum_2 = 0;

	for (int i = 1; i < 5; i++)
	{
		if (ord == 1)
		{
			n1_1 = rand() % 6 + 1;
			drawing(n1_1);
			n1_2 = rand() % 6 + 1;
			drawing(n1_2);
			sum_1 = n1_1 + n1_2;
			mainSum_1 += sum_1;

		}
		else if (ord == 0)
		{
			n2_1 = rand() % 6 + 1;
			drawing(n2_1);
			n2_2 = rand() % 6 + 1;
			drawing(n2_2);
			sum_2 = n2_1 + n2_2;
			mainSum_2 += sum_2;

		}

		cout << "����� ����� ������ � " << i << "-� ������ ����� " << sum_1 << endl;
		cout << "����� ������ ���������� � " << i << "-� ������ ����� " << sum_2 << endl;


		ord = !ord;
		cout << endl;
		system("pause");
		cout << endl;
	}
	outputResult(mainSum_1, mainSum_2);
}

void outputResult(int m_Sum1, int m_Sum2)	//����� ���������� 
{
	int main_Sum1 = m_Sum1;
	int main_Sum2 = m_Sum2;
	if (main_Sum1 > main_Sum2)
	{
		cout << "�� �������! � ���� " << main_Sum1 << " �����!" << endl;
		cout << "� ���������� �� " << main_Sum2 << " �����!" << endl;
	}
	else if (main_Sum1 < main_Sum2)
	{
		cout << "��������� �������! � ���� " << main_Sum2 << " �����!" << endl;
		cout << "� ���� �� " << main_Sum1 << " �����!" << endl;
	}
	else if (main_Sum1 == main_Sum2)
	{
		cout << "�����!" << "� ��� �� " << main_Sum1 << " �����!" << endl;
	}
}

void drawing(int res)	//������ ����� � ������������ � �������� ������
{
	int result = res;

	switch (result)
	{
	case 1: 
		cout << "@@@@@@" << endl
			 << "@@@@@@" << endl
			 << "@@  @@" << endl
			 << "@@@@@@" << endl
			 << "@@@@@@" << endl << endl;

		break;

	case 2:

		cout << "@@@@@@" << endl
			 << "@@@  @" << endl
			 << "@@@@@@" << endl
			 << "@  @@@" << endl
			 << "@@@@@@" << endl << endl;

		break;

	case 3:

		cout << "@@@@@@" << endl
			 << "@@@@ @" << endl
			 << "@@  @@" << endl
			 << "@ @@@@" << endl
			 << "@@@@@@" << endl << endl;

		break;

	case 4:
		
		cout << "@@@@@@" << endl
			 << "@ @@ @" << endl
			 << "@@@@@@" << endl
			 << "@ @@ @" << endl
			 << "@@@@@@" << endl << endl;

		break;

	case 5: 
		
		cout << "@@@@@@" << endl
			 << "@ @@ @" << endl
			 << "@@  @@" << endl
			 << "@ @@ @" << endl
			 << "@@@@@@" << endl << endl;

		break;

	case 6:
		
		cout << "@@@@@@" << endl
			 << "@ @@ @" << endl
			 << "@ @@ @" << endl
			 << "@ @@ @" << endl
			 << "@@@@@@" << endl << endl;

		break;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	startGame();
	system("pause");
	return 0;
}