#include "stdafx.h"
#include <iostream>
#include "MyMath.h"
int MyMath::Factorial(int n);
int MyMath::Binominal(int n, int k);

int main(void) {
	int sample;

	std::cin >> sample;

	std::cout << MyMath::Factorial(sample);

	system("pause");
	return 0;
}