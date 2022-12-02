#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> e;
	cout << fixed;
	if (abs(xk) < 1 && abs(xp) < 1) {
		cout << "-----------------------------------------" << endl;
		cout << "|" << setw(5) << "x" << "   |"
			<< setw(10) << "Arth x " << " |"
			<< setw(7) << "S" << "    |"
			<< setw(5) << "n" << " |"
			<< endl;
		cout << "-----------------------------------------" << endl;
	x = xp;
	while (x <= xk) {
		sum(); // виклик процедури обчислення суми
		Arth = (1.0 / 2 * log((1 + x) / (1 - x)));
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << Arth << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-----------------------------------------" << endl;
	}
	else
		cout << "x >= 1!";
	cin.get();
	return 0;
}