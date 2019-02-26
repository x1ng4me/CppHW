#include<iostream>
#include<string>
#include<vector>
#include <stdlib.h>   
#include <fstream>

using namespace std;

int gcd(int a, int b) {
	int c;
	if (a > b || a == b)
		c = a;
	else
		c = b;
	while (a%c != 0 || b % c != 0) {
		c--;
	}

	return c;
}

int main() {
	int a, b, max_div;
	char c;
	ofstream mycout("out.txt");
note1:
	cout << "please enter two numbers" << endl;
	cin >> a >> b;
	max_div = gcd(a, b);
	cout << "the maximum division number is: " << max_div << endl;
	mycout << "the first input number is: " << a << "\nthe second input number is: " << b << "\nthe greatest division number is " << max_div << endl;
	mycout << endl;

	cout << "do you want to do it again Y/N" << endl;
	cin >> c;
	if (c == 'Y')
		goto note1;
	else {

	}


	mycout.close();
	system("pause");
	return 0;
}