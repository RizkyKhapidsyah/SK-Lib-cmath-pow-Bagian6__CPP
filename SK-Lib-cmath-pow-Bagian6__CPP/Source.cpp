#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	double x, y, hasil;

	x = 8.5;
	y = 3.7;

	hasil = pow(x, y);
	cout << x << " ^ " << y << " = " << hasil;

	_getch();
	return 0;
}