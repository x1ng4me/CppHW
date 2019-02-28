#include <iostream>
#include <vector>
#include <omp.h>
#include <thread>
using namespace std;

int fib(int n)
{
	int result[2] = { 0,1 };
	if (n < 2)
		return result[n];
	int fibOne = 0;
	int fibTwo = 1;
	int fibN = 0;
	int i = 0;
	for (i = 2; i <= n; i++)
	{
		fibN = fibOne + fibTwo;

		fibOne = fibTwo;
		fibTwo = fibN;
	}

	return fibN;
}

int main() {
	int n = 100;
	double a;
	a = fib(100);

	cout << a << endl;
	system("pause");
	return(0);
}