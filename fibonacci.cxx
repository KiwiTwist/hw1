/**
 * 	Jennifer Nastola, 2078140
 *	
 * 	fibonacci.cxx
 */


#include <iostream>

using namespace std;


int main() {
	int N;

	cout << "\nHallo, hier wird die N-te Fibonacci-Zahl berechnet. " << endl;
	cout << "Gib bitte eine positive, ganze Zahl ein: ";
	cin >> N;

	int f0 = 0;
	int f1 = 1;
	int f;

	for(int i = 2; i <= N; i++) {
		f = f1 + f0;
		f0 = f1;
		f1 = f;
	}

	cout << "\nDas Ergebnis ist: f(" << N << ") = " << f << endl;


	return 0;
}
