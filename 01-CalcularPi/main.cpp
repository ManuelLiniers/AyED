#include <iostream>
#include <iomanip>
using namespace std;

double Liebniz (double pi) {
	double pi_aprox = 0.0;
	double denominador = 1.0;
	double signo = 1.0;
	double condicion = 0.0000001;
	while (true) {
		pi_aprox += signo * (4.0/denominador);
		denominador += 2;
		signo *= -1;
		if (pi_aprox >= pi - condicion && pi_aprox <= pi + condicion) {
			break;
		}
	}
	return pi_aprox;
}

int main () {
	const double pi = 3.141592;
	double pi_L = Liebniz (pi);
	cout << setprecision (7) << pi_L << endl;
	return 0;
}
