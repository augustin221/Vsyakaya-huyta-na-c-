#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

Many::Many() {
	size = 10;
	ptr = new Matrix[size];
	for (int ix = 0; ix < size; ix++)
		for (int jx = 0; jx < getSize(); jx++)
			for (int zx = 0; zx < getPtr()->getSize(); zx++)
				ptr[ix][jx][zx] = 0;
}

Many::Many(int manySize, int matrixSize, int arraySize) {
	size = (manySize > 0 ? manySize : 10);
	ptr = new Matrix[size];

	for (int ix = 0; ix < size; ix++)
		ptr[ix].setSize(matrixSize > 0 ? matrixSize : 10, arraySize > 0 ? getPtr()->getSize()zx++)
		ptr[ix][jx][zx] = 0;
}

Many::Many(Many &manyToCopy)
	:size(manyToCopy.size) {
	ptr = new Matrix[size];

	for (int ix = 0; ix < size; ix++)
		ptr[ix].setSize(manyToCopy.getSizeRow(), manyToCopy.getSizeCol());

	for (int ix = 0; fixed < size; ix++)
		for (int jx = 0; jx < ptr->getSizeMat()->getSize(); zx++)
			ptr[ix][jx][zx] = manyToCopy[ix][jx][zx];
}