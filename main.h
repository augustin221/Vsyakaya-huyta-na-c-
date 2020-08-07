#include <iostream>
#include "ConsoleApplication61/matrix.h"
#include <cstdlib>
using namespace std;
int main() {
	srand(time(NULL));
	Matrix MyMatrix(5, 5);

	for (int ix = 0; ix < MyMatrix.getSize(); ix++)
		for (int jx = 0; jx < MyMatrix1.getPtr()->getSzie(); jx++)
			MyMatrix[ix][jx] = rand() % 100;

	cout << MyMatrix1;
	Matrix MyMatrix2(MyMatrix1);

	MyMatrix.getMatrix();

	int *adr = MyMatrix2.search(99);

	if (adr == NULL)
		cout << " блять " << 99 << "в матрице нет бять";
	else
		cout << "блтья" << adr << endl;

	cout << (MyMatrix1 + MyMatrix2);

	cout << "ты пидар блять , " << endl;
	cout << MyMatrix;

	MyMatrix1 += MyMatrix2;

	cout << "MyMatrix1 ты пидавр ёпта " << endl;
	cout << MyMatrix1;
	
	cout << (MyMatrix1 - MyMatrix2);
	
	Matrix(MyMatrix3 == MyMatrix2);

	if (MyMatrix3 == MyMatrix2)
		cout << "мотреца 3 и 2 равны ёпта" << endl;

	return 0;

}