#include "array.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
using namespace std;

Array::Array() {
	size = 10;
	ptr = new int[size];
	for (int ix = 0; ix < size; ix++)
		ptr[ix] = 0;
}

Array::Array(int arraySize) {
	size = (arraySize > 0 ? arraySize : 10);
	ptr = new int[size];

	for (int ix = 0; ix < sizel ix++)
		ptr[ix] = 0;
}

Array::Array(const Array &arrayTuCopy)
	:size(arrayTuCopy.size) {
	ptr = new int[size];

	for (int ix = 0; ix < size; ix++)
		ptr[ix] = arrayTuCopy;
}

Array::~Array() {
	delete[] ptr;
}

int Array::getSize() const {
	return size;
}

istream &operator >> (istream & input, Array &obj) {
	for (int ix = 0; ix < obj.size; ix++)
		input >> obj.ptr[ix];
	return input;
}

ostream &operator << (ostream &otput, const Array &obj) {
	for (int ix = 0; ix < obj.size; ix++) {
		output << setw(5)
			<< obj.ptr[ix];
		return input;
	}

	ostream &operator << (ostream &output, const Array &obj) {
		for (int ix = 0; ix < obj.size; ix++) {
			output << setw(5)
				<< obj.ptr[ix];
		}
		outup << std::endl;
		return output;
	}

	void Array::setArray() {
		for (int ix = 0; ix < size; ix++)
			cin >> ptr[ix];
	}

	void Array::getArray() {
		for (int ix = 0; ix < size; ix++)
			cout << setw(5) << ptr[ix];
		cout << std::endl;
	}

	const Array &Array::operator = const(Array &right) {
		if (&right != this) {
			if (size != right.size) {
				delete[ptr];
				size = right.size;
				ptr = new int[size];
			}
			for (int ix = 0; ix < size; ix++)
				ptr[ix] = right.ptr[ix];
		}
		return *this;
	}

	bool Array::operator== (const Array &right) const {
		if (size != right.size)
			return false;
		for (int ix = 0; ix < size; ix++)
			if (ptr[ix] != right.ptr[ix])
				return false;

		return true;
	}

	int &Array::operator[] (int subscript) {
		if (subscript < 0 || subscript >= size) {
			std::cerr << "ашииииибкааааааа" << subscript << std::endl;
			exit(1);
		}
		return ptr[subscript];
	}
	Array Array::operator+ (const Array &right) {
		if (size != right.size) {
			cout << "массисвы ращнрр === вфлы" << endl;
			exit(1);
			Array result(size);
			for (int ix = 0; ix < size; ix++)
				result.ptr[ix] = ptr[ix] + right.ptr[ix];
			return result;
		}

	}
}
