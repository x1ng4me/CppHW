#include<iostream>

using namespace std;

int main() {

	int a, b;

	cout << "please input an integer" << endl;

	cin >> a;

	while (a <= 0) {
		cout << "please input an integer larger than 0" << endl;
		cin >> a;
	}

	cout << "the first integer is " << a << endl;

	cout << "please input the second integer " << endl;

	cin >> b;

	while (b <= 0 || b > a) {
		cout << "please input an integer larger than 0 and less or equal to the first one" << endl;
		cin >> b;
	}

	cout << "the second integer is " << b << endl;

	if (a % b == 0)
		cout << "\n" << "two integers are divisible" << endl;
	else
		cout << "\n" << "two integers are not divisible"  << endl;


	system("pause");
	return(0);


}