#include<iostream>
#include<stdio.h>


using namespace std;

int main()
{
	int i, c=0, d=0, e=0;
	int max=0, max_number=0;
	int a[] = { 3, 1, 14, 1, 2, 7, 1, 3, 11, 14, 7, 4, 8 };
	int b[15] = { 0 };
	for (i = 0; i < 13; i++) {
		b[a[i]]++;
	}
	for (i = 0; i < 15; i++) {
		if (b[i] == 1) {
			c++;
		}
		else if (b[i] == 2) {
			d++;
		}
		else if (b[i] == 3) {
			e++;
		}
		else {

		}
	}
	cout << c << " number/s appear 1 time" << endl;
	cout << d << " number/s appear 2 time" << endl;
	cout << e << " number/s appear 3 time" << endl;
	cout << "No numbers appear more than 3 times" << endl;

	for (i = 2; i < 15; i++) {
		cout << "the number " << i << " appears " << b[i] << " time/s" << endl;
	}

	for (i = 0; i < 14; i++) {
		b[i] = max;
		if (b[i + 1] > b[i]) {
			max = b[i + 1];
			max_number = i + 1;
		}
	}
	cout << "the largest number is " << max_number << endl;
	cout << "it appears " << max << " times" << endl;





	system("pause");

	return 0;
}