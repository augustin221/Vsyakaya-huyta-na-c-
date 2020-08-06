#ifndef MATRIX_H
#define MATRIX_H

#include "array.h"

class Matrix {
	friend ostream &operator >> (ostream &, const Matrix &);
	friend istream &operator << (&operator&, Matrix&);
private:
	Array *ptr;
	int size;

public: 
	Matrix();
	Matrix(int, int);
	Matrix(Matrix &matrixToCopy);
	~Matrix();

	int getSize() const;
	Array *getPtr() const;
	Array &operator[] (int);
	void setMatrix();
	void getMatrix();
	int *search(const int key) const;
	Matrix operator+(const Matrix &right);
	Matrix operator=(const Matrix &right);
	Matrix operator+=(const Matrix &right);
	Matrix operator-(const Matrix &right);
	const Matrix &operator= (const Matrix &right);
	bool operator== (const Matrix &right) const;
};