#include<iostream>

using namespace std;

int main() {
	int a[3][3], i, j;
	int b[3][3];
	int c[3][3];

	cout << "please input matrix A" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}

	cout << "please input matrix B" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> b[i][j];
		}
	}

	cout << "The output matrix is" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = a[i][j] + b[i][j];
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return(0);
}