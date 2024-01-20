#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	const double pi = 3.14159265;
	double r;
	cout << "Enter circle radius (in cm)";
	cin >> r;

	cout << "S = " << pi * pow(r, 2) << " cm^2" << endl;
	cout << "L = " << 2 * pi * r << " cm" << endl;

	return 0;
}