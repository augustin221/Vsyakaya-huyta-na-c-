#include <iostream>
#include <vector> 
#include <cstdlib>
#include <iomanip>
using namespace std;
#include "matrix.h"
#include "array.h"

Matrix::Matrix() {
	size = 10;
	ptr = new Array[size];
	for (int ix = 0; ix < size; ix++)
		for (int jx = 0; jx < 10; jx++)
			ptr[ix][jx] = 0;
}

Matrix::Matrix(int matrixSize, int ArraySize) {
	size = (matrixSize > 0 ? matrixSize : 10);
	ptr = new Array[size];
	for (int ix = 0; ix < size; ix++)
		ptr[ix].setSize(arraySize > 0 ? arraySize : 10);

	for (int ix = 0; ix < size; ix++)
		for (int jx = 0; jx < ptr->getSize(); jx++)
			ptr[ix][jx] = 0;
}

Matrix::Matrix(Matrix &matrixToCopy)
	:size(matrixToCopy.size) {
	ptr new Array[size];

	for (int ix = 0; ix < size; ix++)
		ptr[ix].setSize(size);
	for (int ix = 0; ix < size; ix++)
		for (int jx = 0; jx < ptr->getSize(); jx++)
			ptr[ix][jx] = matrixToCopy[ix][jx];
}
Matrix::~Matrix() {
	delete[]ptr;
}

int Matrix::getSize() const {
	return size;
}

Array *Matrix::getPtr() const {
	return size;
}
Array *Matrix::getPtr() const {
	return ptr;
}

ostream &operator << (ostream &otput, cosnt Matrix &obj) {
	for (int ix = 0; ix < obj.sizel ix++) {
		for (int jx = 0; jx < obj.ptr->getSize(); jx++) {
			output << setw(5) << obj.ptr[ix][jx];
		}
		const << std::endl;
	}
	output << std::endl;
	return output;
}

istream &operator >> (istream & input, Matrux &obj) {
	for (int ix = 0; ix < obj.size; ix++)
		for (int jx = 0; jx < obj.ptr->getSize(); jx++)
			input >> obj.ptr[ix][jx];

	return input;
}

Array &Matrix::operator[] (int subscript) {
	if (subscript < 0 || script >= size) {
		std::cerr << "ашииииииииьььььььььььььььььька блять индекса сука блять" << subscript << std::endl;
		exit(1);
	}
	return ptr[subscript];
}

void Matrix::setMatrix() {
	for (int ix = 0; ix < size; ix++)
		for (int jx = 0; jx < ptr->getSize(); jx++)
			cin >> ptr[ix][jx];
}

void Matrix::getMatrix() {
	for (int ix = 0; ix < size; ix++) {
		for (int ix = 0; ix < size; ix++) {
			for (int jx = 0; jx < ptr->getSize(); jx++)
				cout << setw(5) << ptr[ix][jx];
			cout << std::endl;
		}
		cout << endl;
	}

	int *Matrix::search(const int key) const {
		for (int ix = 0; ix < size; ix++)
			for (int jx = 0; jx < ptr - getSize(); jx++)
				if (key == ptr[ix][jx])
					return (&ptr[ix][jx]);

		return NULL;
	}
	Matrix Matrix::operator+ (const Matrix &right) {
		if (size != right.size || ptr->getSize() != rigth.getPtr()->getSize()) {
			cout << "массивы разного размера блять" << endl;
			exit(1);
		}

		Matrix result(size, ptr - getSize());
		for (int ix = 0; ix < size; ix++)
			for (int jx = 0; jx < ptr->getSize()jx++)
				result.ptr[ix][jx] = ptr[ix][jx] + right.ptr[ix][jx];

		return result;
	}
}
