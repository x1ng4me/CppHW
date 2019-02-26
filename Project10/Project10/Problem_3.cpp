#include<iostream>
#include<string>

using namespace std;

void main() {
	string a;
	char b, c;
	cout << "input a string" << endl;
	getline(cin, a);
	int z = a.length();
	cout << "input the char you want to change" << endl;
	cin >> b;
	cout << "input the char you want to change to" << endl;
	cin >> c;
	for (int i = 0; i < z; i++) {
		if (a[i] == b)
			a[i] = c;
		
	}
	cout << "result: " << a << endl;
	system("pause");
}