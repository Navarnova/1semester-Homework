#pragma once
#include <ostream>

class Matrix {
private:
	long long n;
	double* data;

public:
	Matrix();
	Matrix(long long n, long long n);
	Matrix(const Matrix& matrix);
	~Matrix();
	double get(long long i, long long j);
	bool equalsize(const Matrix& matrix1, const Matrix& matrix2);
	bool matrix();
	void print();
	void E();
	int det(const Matrix& matrix);
	friend Matrix operator==(Matrix matrix1, Matrix matrix2);
	friend Matrix operator+(double d, Matrix matrix);
	friend Matrix operator+(Matrix matrix, double d);
	friend Matrix operator-(double d, Matrix matrix);
	friend Matrix operator-(Matrix matrix, double d);
	friend Matrix operator*(double d, Matrix matrix);
	friend Matrix operator*(Matrix matrix, double d);
	friend Matrix operator+(Matrix matrix1, Matrix matrix2);
	friend Matrix operator-(Matrix matrix1, Matrix matrix2);
	friend Matrix operator*(Matrix matrix1, Matrix matrix2);
	friend Matrix operator/(Matrix matrix1, Matrix E());
	friend std::ostream& operator<<(std::ostream& stream, Matrix& matrix);
};