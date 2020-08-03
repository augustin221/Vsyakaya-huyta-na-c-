#include <iostream>
#include <ostream>
using std::iostream;
using std::ostream;

calss Array{
	friend iostream &operator >> (iostream&, array&);
	friend ostream &operator<< (ostream&, cosnt array);
private:
	int *ptr;
	int size;
public:
	Array();
	Array(int);
	Array(const Array &);
	~Array();

	int getSize() const;
	void setArray();
	void getArray();
	const Array &operator = (const Array &);
	bool operator== (const Array &) const;
	int &operator[] (int);
	Array operator+ (const Array &);
	Array operator+= (const Array &);
	Array operator- (const Array &);
	int seacrh(const int) const;
	void choiceSrot();

}