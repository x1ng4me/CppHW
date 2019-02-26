#include<iostream>
using namespace std;

template <class T, class Y>
bool checkIfSameType(T a, Y b) {
	return typeid(a).name() == typeid(b).name();
}

int main() {
	int a = 1;
	int b = 2;
	char c = 'a';
	int d, e;

	d = checkIfSameType(a, b);
	e = checkIfSameType(a, c);
	if (d == 0) {
		cout << "a and b are not same type." << endl;
	}
	else {
		cout << "a and b are same type." << endl;
	}
	cout << endl;

	if (e == 0) {
		cout << "a and c are not same type." << endl;
	}
	else {
		cout << "a and c are same type." << endl;
	}
	

	system("pause");
	return(0);
}