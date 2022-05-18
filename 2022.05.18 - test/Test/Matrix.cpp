#include "Matrix.h"

Matrix::Matrix() {
	n = 0;
	data = nullptr;
}

Matrix::Matrix(long long n, long long n) {
	this->n = n;
	this->data = new double[n * n];
}

Matrix::Matrix(const Matrix& matrix) {
	n = matrix.n;
	data = new double[n * n];
	for (long long i = 0; i < n * n; ++i) {
		data[i] = matrix.data[i];
	}
}

Matrix::~Matrix() {
	if (nullptr != data) {
		delete[] data;
	}
}

double Matrix::get(long long i, long long j) {
	return data[i * n + j];
}

bool Matrix::equalsize(const Matrix& matrix1, const Matrix& matrix2) {
	return matrix1.n == matrix2.n;
}

void Matrix::E() {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n ; ++j) {
			if (i == j) {
				data[i * n + j] = 1;
			}
			else {
				data[i * n + j] = 0;
			}
		}
	}
}

Matrix operator==(Matrix matrix1, Matrix matrix2) {
	if (equalsize(matrix1, matrix2) == true) {
		for (long long i = 0; i < matrix1.n * matrix2.n; ++i) {
			if (matrix1.data[i] == matrix2.data[i])
			{
				matrix1 = matrix2;
			}
		}
	}
}

Matrix operator+(double d, Matrix matrix) {
	for (long long i = 0; i < matrix.n * matrix.n; ++i) {
		matrix.data[i] += d;
	}
}

Matrix operator+(Matrix matrix, double d) {
	for (long long i = 0; i < matrix.n * matrix.n; ++i) {
		matrix.data[i] += d;
	}
}

Matrix operator-(double d, Matrix matrix) {
	for (long long i = 0; i < matrix.n * matrix.n; ++i) {
		matrix.data[i] -= d;
	}
}

Matrix operator-(Matrix matrix, double d) {
	for (long long i = 0; i < matrix.n * matrix.n; ++i) {
		matrix.data[i]-= d;
	}
}

Matrix operator*(double d, Matrix matrix) {
	for (long long i = 0; i < matrix.n * matrix.n; ++i) {
		matrix.data[i] *= d;
	}
}

Matrix operator*(Matrix matrix, double d) {
	for (long long i = 0; i < matrix.n * matrix.n; ++i) {
		matrix.data[i] *= d;
	}
}

Matrix operator+(Matrix matrix1, Matrix matrix2) {
	if (equalsize(matrix1, matrix2) == false) {
		return;
	}
	for (long long i = 0; i < matrix1.n * matrix1.n; ++i) {
		matrix1.data[i] += matrix2.data[i];
	}
}

Matrix operator-(Matrix matrix1, Matrix matrix2) {
	if (equalsize(matrix1, matrix2) == false) {
		return;
	}
	for (long long i = 0; i < matrix1.n * matrix1.n; ++i) {
		matrix1.data[i] -= matrix2.data[i];
	}
}

int det(const Matrix& matrix) {
	int** p;
	int m, j, d, k;
	p = new int* [n];
	for (i = 0; i < m; i++)
		p[i] = new int[m];
	j = 0; d = 0;
	k = 1;
	n = m — 1;
	if (m < 1) cout << "Impossible";
	if (m == 1) {
		d = matrix[0][0];
		return(d);
	}
	if (m == 2) {
		d = matrix[0][0] * matrix[1][1] —(matrix[1][0] * matrix[0][1]);
		return(d);
	}
	if (m > 2) {
		for (i = 0; i < m; i++) {
			d = d + k * matrix[i][0] * det(matrix);
			k = -k;
		}
	}
	return(d);
}

Matrix operator*(Matrix matrix1, Matrix matrix2) {
	if (equalsize(matrix1, matrix2) == false) {
		Matrix empty;
		return empty;
	}
	Matrix result(matrix1.n, matrix2.n);
	for (long long i = 0; i < matrix1.n; ++i) {
		for (long long j = 0; j < matrix2.n; ++j) {
			result.data[i * matrix1.n + j] = 0;
			for (long long k = 0; k < matrix1.n; k++) {
				result.data[i * matrix1.n + j] += matrix1.get(i, k) * matrix2.get(k, j);
			}
		}
	}
	return result;
}

bool Matrix::matrix() {
	if (data == nullptr) {
		return false;
	}
	for (long long i = 0; i < n; ++i) {
		for (long long j = 0; j < n; ++j) {
			cout << "[" << i << "]" << "[" << j << "] =";
			cin >> data[i * n + j];
		}
	}
	return true;
}

void Matrix::print() {
	for (long long i = 0; i < n; ++i) {
		for (long long j = 0; j < n; ++j) {
			cout << data[i * n + j];
		}
		cout << endl;
	}
}

std::ostream& operator<<(std::ostream& stream, Matrix& matrix) {
	stream << "[" << matrix.n << "] {";
	if (matrix.n == 0) {
		stream << "EMPTY";
	}
	else {
		for (long long i = 0; i < matrix.n - 1; ++i) {
			stream << matrix.data[i] << ", ";
		}
		stream << matrix.data[matrix.n - 1];
	}
	stream << "}";
	return stream;
}