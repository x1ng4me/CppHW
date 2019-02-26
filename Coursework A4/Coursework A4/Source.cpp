#include<iostream>
#include<math.h>

using namespace std;

class point {
public:
	void readpoint() {
		double a[3], b[3];
		cout << "please input the x, y, z for point A" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}
		x1 = a[0];
		y1 = a[1];
		z1 = a[2];
		cout << "please input the x, y, z for point B" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> b[i];
		}
		x2 = b[0];
		y2 = b[1];
		z2 = b[2];
	}

	void length() {
		deltax = pow((x1 - x2), 2);
		deltay = pow((y1 - y2), 2);
		deltaz = pow((z1 - z2), 2);
		len = sqrt(deltax + deltay + deltaz);
	}

	void printout() {
		cout << "the length between two points is " << len << endl;
	}



private:
	double x1, y1, z1;
	double x2, y2, z2;
	double len;
	double deltax, deltay, deltaz;
};

int main() {
	point M;
	M.readpoint();
	M.length();
	M.printout();

	system("pause");
	return 0;
}