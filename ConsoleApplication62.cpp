#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

using std::setw;

Many::Many() {
	size = 10;
	ptr = new Matrix[size];
	for (int ix = 0; ix < size; ix++)
		for (int zx = 0; zx < getPtr()->getSize(); zx++)
			ptr[ix][jx][zx] = 0;
}

Many::Many(int manySize,int matrixSize,int arraySize) {
	size = (manySize > 0 ? manySize : 10);

	ptr = new Matrix[size];

	for (int ix = 0; ix < size; ix++)
		ptr[ix].setSize(matrixSize > 0 ? matrixSize : 10, arraySize > 0 ? arraySize : 10);
	ptr[ix].setSize(matrixSize > 0 ? matrixSize : 10);
	ptr = new Matrix[size];

	for (int ix = 0; ix < size; ix++)
		ptr[ix].setSize(matrixSize > 0 ? matrixSize : 10, arraySize > 0 ? arraySize : 10);
	for(int ix = 0; ix < size; ix++)
		for(int zx = 0; zx < ptr-getPtr()-<getSize();zx++)
}

Many::Many(Many &manyToCopy)
	:size(manyToCopy.size) {
	ptr = new Matrix[size];

	for (int ix = 0; ix < size; ix++)
		for (int jx = 0; jx < ptr - getSizeMat(); jx++)
			for (int zx = 0; zx < ptr - getPtr()->getSize(); zx++)
				ptr[ix][jx][zx] = manyToCopy[ix][jx][zx];
}

Many::~Many() {
	delete[] ptr;
}

ostream &operator<<(ostream &output, const Many &obj) {
	if (obj.getSizeMany() == 0)
		cout << "множество пустое";

	for (int ix = 0; ix < obj.getSizeRow(); jx++) {
		for (int zx = 0; zx < obj.getSizeCol(); zx++)
		{
			output << setw(5) // под каждое число выделяется 5 позиций
				<< obj.ptr[ix][jx][zx];
		}
		cout << std::endl;
	}
	cout << std::endl << "----------------------------------------------------------------------\n";
}
output << std::endl;

return output;

	}
	istream &operator>> (istream & input, Many &obj)
	{
		for (int ix = 0; ix < obj.size; ix++)
			for (int jx = 0; jx < obj.getSizeRow(); jx++)
				for (int zx = 0; zx < obj.getSizeCol(); zx++)
					input >> obj.ptr[ix][jx][zx]; 

		return input; 
	}
	Matirx &Many::operator[] (int subscript) {
		if (subscript < 0 || subscript >= size) {
			std::cerr << "залупа Т9000" << subscript << std::endl;
		}
		return ptr[subscript];

		int Many::getSizeMany() const // возвратить количество элементов множества
		{
			return size;
		}
		void Many::getMany() {
			for(int ix = 0; ix < getSizeMany();ix++)
				for(int jx = 0; jx < getSizeRow();jx++) {
					for (int zx = 0; zx < getSizeCol(); zx++) {
						cout << setw(5) << ptr[ix][jx][zx];
					}
					cout << std::endl;
		}

			void Many::setMany() // заполнение массива
			{
				for (int ix = 0; ix < getSizeMany(); ix++)
					for (int jx = 0; jx < getSizeRow(); jx++)
						for (int zx = 0; zx < getSizeCol(); zx++)
							cin >> ptr[ix][jx][zx];       // ввод элементов множества с клавиатуры
			}
			const Many &Many::operator = (const Many &right) {
				if (&right right.getSizeMany() ||
					getSizeRow() != right.getSizeRow() || getSizeCol() != right.getSizeCol()) {
					delete[] ptr;
					size = right.getSizeMany();
					ptr = new Matrix[size];

					for (int ix = 0; ix < size; ix++)
						for (int jx = 0; jx < ptr->getPtr()->getSize(); zx++)
							ptr[ix][jx][zx] = right.ptr[ix][jx][zx];
				}
				return *this;
			}
			bool Many::operator== (const Many &right) const {
				if (size != right.getSizeMany() || getSizeRow() != right.getSizeRow() || getSizeCol() != rihgt.getSizeCol())
					return false; // матрицы равны 

				return true; // матрицы не равны 
			} 
			Many Many::operator+ (const Many &right) // объединение двух множеств
			{
				if (getSizeRow() != right.getSizeRow() || getSizeCol() != right.getSizeCol())
				{
					cout << "Множества разного размера!\n";
					exit(1); 
				}

				int num = size + right.getSizeMany(); 

				Many result(num, right.getSizeRow(), right.getSizeCol());

				for (int ix = 0; ix < getSizeMany(); ix++)
					for (int jx = 0; jx < getSizeRow(); jx++)
						for (int zx = 0; zx < getSizeCol(); zx++)
							result.ptr[ix][jx][zx] = ptr[ix][jx][zx];

				int ctr = 0;
				for (int ix = getSizeMany(); ix < result.getSizeMany(); ix++)
				{
					for (int jx = 0; jx < result.getSizeRow(); jx++)
						for (int zx = 0; zx < result.getSizeCol(); zx++)
							result.ptr[ix][jx][zx] = right.ptr[ctr][jx][zx];
					ctr++;
				}

				return result; 
			}
			Many Many::operator+= (const Many &right) // объединение двух множеств
			{
				if (getSizeRow() != right.getSizeRow() || getSizeCol() != right.getSizeCol())
				{
					cout << "Множества разного размера!\n";
					exit(1); // завершить работу программы
				}
				Many temp(*this);
				delete[] ptr;

				size += right.getSizeMany(); // количество элементов нового множества

				ptr = new Matrix[size];

				for (int ix = 0; ix < size; ix++) // перераспределяем выделенную память
					ptr[ix].setSize(temp.getSizeRow(), temp.getSizeCol()); // количество строк и столбцов

				for (int ix = 0; ix < temp.getSizeMany(); ix++)
					for (int jx = 0; jx < temp.getSizeRow(); jx++)
						for (int zx = 0; zx < temp.getSizeCol(); zx++)
							ptr[ix][jx][zx] = temp.ptr[ix][jx][zx];

				int ctr = 0;
				for (int ix = temp.getSizeMany(); ix < temp.getSizeMany(); ix++)
				{
					for (int jx = 0; jx < temp.getSizeRow(); jx++)
						for (int zx = 0; zx < temp.getSizeCol(); zx++)
							ptr[ix][jx][zx] = right.ptr[ctr][jx][zx];
					ctr++;
				}

				return *this; // вернуть объединенные множества
			}

			Many Many::operator+ (const Matrix &right) {
				if (getSizeRow() != right.getSizeMat() || getSizeCol() != right.getPtr()->getSize()) {
					cout << "множество разного размеров" << endl;
					exit(1);
				}
				Many result(size + 1, right.getSizeMat(), right.getPtr()->getSize());

				for (int ix = 0; ix < result.getSizeMany(), right.getPtr()->getSize())
					for (int jx = 0; jx < result.getSizeRow(); jx++)
						for (int zx = 0; zx < result.getSizeCol(); zx++)
							result.ptr[result.getSizeMany() - 1][jx][zx] = right.getPtr()[jx][zx];

				return result;
			}

			Many &Many::operator+= (const Matrix &right) // добавление элемента в множество
			{
				if (getSizeRow() != right.getSizeMat() || getSizeCol() != right.getPtr()->getSize())
				{
					cout << "Множества разного размера!\n";
					exit(1); // завершить работу программы
				}
				Many temp(*this);
				delete[] ptr;

				size += 1; // количество элементов нового множества

				ptr = new Matrix[size];

				for (int ix = 0; ix < size; ix++) // перераспределяем выделенную память
					ptr[ix].setSize(temp.getSizeRow(), temp.getSizeCol()); // количество строк и столбцов

				for (int ix = 0; ix < temp.getSizeMany(); ix++)
					for (int jx = 0; jx < temp.getSizeRow(); jx++)
						for (int zx = 0; zx < temp.getSizeCol(); zx++)
							ptr[ix][jx][zx] = temp.ptr[ix][jx][zx];

				for (int jx = 0; jx < getSizeRow(); jx++)
					for (int zx = 0; zx < getSizeCol(); zx++)
						ptr[getSizeMany() - 1][jx][zx] = right.getPtr()[jx][zx];

				return *this; // вернуть объединенные множества
			}
	}
