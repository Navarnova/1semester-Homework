#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
	Matrix m1(3, 3), *m2;
	long long n;
	cout << "matrix m1: " << endl;
	m1.matrix();
	cout << "m2 dim: ";
	cin >> n;
	m2 = new Matrix(n, n);
	cout << "matrix m2: " << endl;
	m2->matrix();
	cout << "m1: " << endl;
	m1.print();
	cout << "m2: " << endl;
	m2->print();

	if (equalsize(m1, *m2) == false) {
		cout << "can't multiply, addition, subtraction matrixes" << endl;
	}
	else {
		cout << m1 * (*m2) << endl;
		cout << m1 + (*m2) << endl;
		cout << m1 - (*m2) << endl;
		cout << (*m2) - m1 << endl;
	}

	if (det(m1) == 0) {
		cout << "not inverse matrix" << endl;
	}
	else {
		cout << det(m1) << endl;
		cout << m1 / E() << endl;
	}

	return 0;
}