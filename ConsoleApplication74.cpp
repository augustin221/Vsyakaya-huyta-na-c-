#include<iostream>
#include<cstring>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<fstream>
using namespace std;
const int MWORD = 30;

struct Link {
	char word[MWORD];
	Link* next;
	Link* prev;
};


class linkList {
private:
	Link* frist;
	Link* last;
public:
	linkList() {
		frist = NULL;
		last = NULL;
	}
	~linkList() {
		while (frist != last) {
			Link* temp = frist;
			frist = frist -> prev;
			delete temp;
		}
		delete last;
	}
	void pushback(char* str)        
	{
		Link* newlink = new Link;
		strcpy(newlink->word, str);

		if (frist)
		{
			newlink->prev = frist;
			frist->next = newlink;
		}

		else
			last = newlink;

		newlink->next = last;
		last->prev = newlink;
		frist = newlink;
	}
	void pushFront(char* str) {
		Link* newlink = new Link;
		strcpy(newlink->word, str);

		if (last) {
			newlink->next = last;
			last->prev = newlink;
		}
		else frist = newlink;

		newlink->prev = frist;
		frist->next = newlink;
		last = newlink;
	}
	void showList_front() {
		Link* temp = last;
		if(frist)
			do {
				cout << temp->word << endl;
				temp = temp->next;
			} while (temp != last);
	}
	void showlist_back() {
		Link* temp = frist;
		if(frist) 
			do {
				cout << temp->word << endl;
			}
		char* popfront()   
		{
			Link* temp = first;
			deleteLink(first);
			return temp->word;

		}
		char* popback() {
			Link* temp = last;
			deleteLink(last);
			return temp->word;
		}
		void deleteLink(Link* temp) {
			if (frist) {
				if (temp->next == temp) {
					frist = NULL;
					last = NULL;
				}
				else {
					if (temo == last)
						last = last->next;
					if (temp == last)
						last = last->next;
					if (temp == frist)
						frist = frist->prev;

					(temp->next)->prev = temp->prev;
					(temp->prev)->next = temp->next;

					delete temp;
				}
				Link* temp = first;
				if(first)
					do {
						if (strcmp(dt, temp->word) == 0)
							return temp;

						temp = temp->prev;
					} while (temp != first);

					temp = NULL;
					return temp;
			}
			void sortlist() {
				char temdata[100];
				Link* temp1 = first;

				int n = howmany_linjs();

				for (int x = 0; x < n - 1; x++) {
					Link* temp2 = temp1->prev;
					for (int i = x; i < n - 1; i++)
					{
						if (strcmp(temp1->word, temp2->word) > 0)
						{
							strcpy(tempdata, temp2->word);
							strcpy(temp2->word, temp1->word);
							strcpy(temp1->word, tempdata);
						}

						temp2 = temp2->prev;
					}
					temp1 = temp1->prev;
				}
			}
				}

		linkList operator = (linkList& 1) {
			if(l.first) {
				Link* temp = l.first;
				do {
					pushfront(temp->word);
					temp = temp->prev;
				} while (temp != l.first);
			}
			linkList operator=(linkList & 1) {
				if (l.first) {
					Link* temp = l.first;
					do {
						pushfront(temp->word);
						temp = temp->prev;
					} while (temp != l.first);
				}
				return *this;
			}
			int howmany_links() {
				if (first) {
					Link* temp = first;
					int i = 0;
					do {
						temp = temp->prev;
						i++;
					} while (temp != first);

					return i;
				}
				else return 0;
			}
			void clear()            //очистить список
			{
				while (first->prev != last)
				{
					Link*temp = first->prev;
					first = first->prev;
					delete temp;
				}
				last = NULL;
				first = NULL;
			}
		};
int main() {
	setConsoleCp(1251);
	setConsoleOutput(1251);

	linkList li;
	char** mass = NULL;
	int mass_size = 0;
	char menu;

	while (ture) {
		cin.sync();
		cout << "иди нахуй" << "залупка" << "залупка два бялть"   cout << "\nВыберите действие:"
			<< "\n1 - дополнить список"
			<< "\n2 - показать список(начиная с последнего звена)"
			<< "\n3 - удалить элемент из списка"
			<< "\n4 - копировать элементы списка в массив"
			<< "\n5 - сортировать список"
			<< "\n6 - найти элемент в списке"
			<< "\n7 - считывания данных из файла в список"
			<< "\n8 - сохранение списка в файл"
			<< "\n9 - очистить список"
			<< "\nВаш выбор: ";
		cin>> menu
	}

}


	}

};