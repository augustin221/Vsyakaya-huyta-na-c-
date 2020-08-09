#include <iostream>
using namespace std;

class Prism {
private:
	double high, vol, lenght_side, space_base;
	int number_grain;

public:
	Prism(double h = 1, double lside = 1, int num = 3, double sbase = 10);
	void Sethigh(const double &);
	void setLenghtSide(const double &);
	void setGrain(const int &);
	void setSpaceBase(const double &);

	double getHight() const;
	int getGrain() const;
	double getSpaceBase() const;
	double getLengthSide() const;
	double getVol();
	double setLengthSide() const;
};

int main() {
	Prism obj1;
	int key;
	bool exit = false;
	
	while (!exit) {
		cout << "сделаайте выбар :\n0 - вход ёптыть" << endl;

		cin >> key;

		double temp; 
		
		switch (key)
		{
		case: {exit = true; break; }
		case 1: {cout << "высота призщмы" << obj1.getHight() << endl << endl; break; };
		case 2: {cout << "Количество боковых граней = " << obj1.getGrain() << endl << endl; break; }
		case 3: {cout << "Площадь основания = " << obj1.getSpaceBase() << endl << endl; break; }
		case 4: {cout << "Длинна сторон призмы = " << obj1.getLengthSide() << endl << endl; break; }
		case 5: {cout << "Объём призмы = " << obj1.getVol() << endl << endl; break; }
		case 6: {cout << ":= "; cin >> temp; obj1.Sethigh(temp); break; }
		case 7: {cout << ":= "; cin >> temp; obj1.setLengthSide(temp); break; }
		case 8: {cout << ":= "; cin >> temp; obj1.setGrain(temp); break; }
		case 9: {cout << ":= "; cin >> temp; obj1.setSpaceBase(temp); break; }
		default: {cout << "Не верный выбор\n"; }
		
			break;
		}
		return 0;
	}
	Prism::Prism(double h , double lside , int num ,double sbase) : high(h), lenght_side(lside), number_grain(num), space_base(sbase),vol(h * sbase) {   }

	void Prism::setHigh(const double & h) {
		high = (h > 0 ? h : 1);
	}

	void Prism::Sething(const double & h) {
		high = (h > 0 ? d : 1);
	}

	void Prism::setLengthSide(const double & d) // установить длинну граней
	{
		length_side = (d > 0 ? d : 1); // если h не нулевое положительное число, то инициализировать высоту значением h, иначе единицей
	}

	void Prism::setGrain(const int & number) {
		number_grain = (number > 0 ? number : 3);
	} 
	void Prism::setSpaceBase(const double &number)  // задать площадь основания призмы
	{
		space_base = (number > 0 ? number : 10); // пусть по умолчанию площадь равна 10
	}

	double Prism::getHigh() const {
		return high;
	}

	int Prism::getGrain() const {
		return number_grain;
	}

	double Prism::getLenghtSide() const {
		return space_base;
	}

	double Prism::getVol() {
		return vol = space_base * high;
	}
}