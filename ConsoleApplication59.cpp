#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal {
public:
	Animal(); // Конструктор по умолчанию
	Animal(const Animal & object); // Конструктор копирования
	Animal(const string animal, const string name, const int sex, const double price); // Конструктор с параметрами
	~Animal();// Деструктор

	static int getCount() {
		return Count;
	}
	int getId() {
		return id;
	}
	void outData();

	void setAnimal(const string animal);
	void setName(const string name);
	void setSex(const int sex);
	void setPrice(const double price);
	void setData(const string animal, const string name, const int sex, const double price);

	string getAnimal();
	string getName();
	int getSex();
	double getPrice();

private:
	static int Count;
	int id;

	string animal;
	int sex;
	string name;
	double price;

	string getnSex(const int sex);
};

int Animal::Count = 0;

Animal::Animal()
	: animal("none"), name("none"), sex(-1), price(-1) {
	Animal::Count++;
	id = Animal::Count;
}

Animal::Animal(const Animal & object) {
	this->animal = object.animal;
	this->name = object.name;
	this->sex = object.sex;
	this->price = object.price;
	Animal::Count++;
	id = Animal::Count;
}

Animal::Animal(const string animal, const string name, const int sex, const double price)
	: animal(animal), name(name), sex(sex), price(price) {
	Animal::Count++;
	id = Animal::Count;
}

Animal::~Animal() {
	Animal::Count--;
}

void Animal::outData() {
	cout << animal << " " << name << " " << getnSex(sex) << " " << price << endl;
}

void Animal::setAnimal(const string animal) {
	this->animal = animal;
}

void Animal::setName(const string name) {
	this->name = name;
}

void Animal::setSex(const int sex) {
	this->sex = sex;
}

void Animal::setPrice(const double price) {
	this->price = price;
}

void Animal::setData(const string animal, const string name, const int sex, const double price) {
	this->animal = animal;
	this->name = name;
	this->sex = sex;
	this->price = price;
}

string Animal::getAnimal() {
	return animal;
}

string Animal::getName() {
	return name;
}

int Animal::getSex() {
	return sex;
}

double Animal::getPrice() {
	return price;
}

string Animal::getnSex(const int sex) {
	switch (sex) {
	case 0: return "Самка";
	case 1: return "Самец";
	default: return "Неизвестно";
	}
}

void outMenu();
int inNum();

int main() {
	setlocale(LC_ALL, "rus");

	vector <Animal> vecAnimal;

	string cmd;
	string tanimal, tname;
	int tsex;
	double tprice;

	while (true) {
		outMenu();
		cout << ">";
		cin >> cmd;
		if (cmd == "q" || cmd == "quit") break;
		switch (atoi(cmd.c_str())) {
		case 1:
			if (!Animal::getCount()) {
				cout << "Информаця не найдена." << endl;
			}
			for (int i = 0; i < Animal::getCount(); i++) {
				cout << i + 1 << ") ";
				vecAnimal[i].outData();
			}
			break;
		case 2:
			if (!Animal::getCount()) {
				cout << "Животных не найдено." << endl;
				break;
			}
			vecAnimal[inNum()].outData();
			break;
		case 3:
			cout << "Введите тип: ";
			cin >> tanimal;
			cout << "Введите имя: ";
			cin >> tname;
			cout << "Введите пол (0/1): ";
			cin >> tsex;
			cout << "Введите цену: ";
			cin >> tprice;
			vecAnimal.emplace_back(tanimal, tname, tsex, tprice);
			break;
		default:
			break;
		}
	}
	system("pause");
	return false;
}

void outMenu() {
	cout << "1) Вывести информацию о всех животных";
	cout << "\n2) Вывести информацию о животном";
	cout << "\n3) Добавить животное";
	cout << "\n 'q' выход.";
	cout << endl;
}

int inNum() {
	int number;
	while (true) {
		cout << "Введите номер (1 - " << Animal::getCount() << "): ";
		cin >> number;
		if (number >= 1 && number <= Animal::getCount()) {
			return number - 1;
		}
		cout << "Ошибка." << endl;
	}
}