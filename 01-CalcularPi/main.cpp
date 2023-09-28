#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i;
	double pi = 0.0;
	double denominador = 1.0;
	double signo = 1.0;
	for (i = 0; i < 1000000 ; i++) {
		pi += signo * (4.0/denominador);
		denominador += 2;
		signo *= -1;
	}
	cout << setprecision (7) << pi << endl;
	return 0;
}
