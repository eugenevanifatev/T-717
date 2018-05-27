#pragma once
namespace MyMath {


	int g_factorialValues[] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880,
		3628800, 39916800, 479001600 };
	int Factorial(int n) {
		if (n<0 || n>12) return -1;
		return g_factorialValues[n];
	}


	int Binominal(int n, int k) {

		if (k<0 || k>n) return 0;

		if (n<0) return 0;

		if (k == n || k == 0) return 1;

		int c1 = Binominal(n - 1, k);
		int c2 = Binominal(n - 1, k - 1);
		int ret = c1 + c2;

		if (ret<c1 || c1 == -1 || c2 == -1) return -1;
		return ret;
	}

}