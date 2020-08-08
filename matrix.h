#ifndef MANY_H
#endif MANY_H// !MANY_H

class Mnay : public Matrix {
	friend ostream &operator>>(ostream &, const Many &);
	friend istream &operator>>(istream &, Many &);
private:
	Matrix *ptr;
	int size;
public:
	Many();
	Many(int, int, int);
	Many(Many &);
	~Many();

	Matrix &operator[] (int);
	int getSizeMany() const;
	int getSizeRow() const {
		return ptr -> getSizeMat();
	}
	int getSizeCol() const {
		return ptr->getPtr()->getSize();
	}
				void getMany();
				void setMany();
				const Many &operator = (const Many &);
				bool operator== (const Many &right) const;
				Many operator-(const Many &right);
				Many operator+(const Matrix &right);
				virtual Many operator+ (const Matrix &right);
				virtual Many &operator (const Matrix &right);

};