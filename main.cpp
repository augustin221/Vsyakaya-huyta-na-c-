
#include <iostream>
#include <Windows.h> // прототипы функций SetConsoleCP() и SetConsoleOutputCP()
using namespace std;

int main(int argc, char* argv[])
{
    // Кириллица в консоли
    SetConsoleCP(1251); // функция устанавливает кодовую таблицу(win-cp 1251) для работы с потоком ввода
    SetConsoleOutputCP(1251); // функция устанавливает кодовую таблицу(win-cp 1251) для работы с потоком вывода

    char name[20] = "\0"; // строка для хранения имени,
    cout << "Введите имя студента: ";
    cin >> name;

    char surname[30] = "\0"; // строка для хранения фамилии студента
    cout << "Введите фамилию студента: ";
    cin >> surname;

    char patronymic[30] = "\0"; // строка для хранения отчества
    cout << "Введите отчество студента: ";
    cin >> patronymic;

    char group_number[10] = "\0"; // строка для хранения номера группы
    cout << "Введите номер группы студента: ";
    cin >> group_number;

    int len = 31; // минимальная длина рамки
    int len_str1 = 25 + strlen(group_number); // длина второй строки в рамке
    int len_str2 = strlen(name) + strlen(surname) + strlen(patronymic) + 6; // длина третьей строки

    // в операторе if определяем длину рамки? причём минимальная длина должна быть - 31 символ
    if ( len_str1 >= len_str2 && len_str1 > 31 )
        len = len_str1;
    else
        if (len_str2 > 31)
        len = len_str2;

    cout << "\n\t\t\t"; // выравнивание по центру
    for (int counter = 0; counter < len; counter++ )
        cout << "*";

    cout << "\n\t\t\t* Лабораторная работа №1";
    for (int counter = 0; counter < len - 25; counter++ )
        cout << " ";

    cout << "*\n\t\t\t* Выполнил(а): ст. гр. " << group_number;
    for (int counter = 0; counter <= (len - len_str1); counter++ )
        cout << " ";

    cout  << "*\n\t\t\t* " << surname << " " << name << " " << patronymic;
    for (int counter = 0; counter <= (len - len_str2); counter++ )
        cout << " ";
    cout << "*";

    cout << "\n\t\t\t"; // выравнивание по центру
    for (int counter = 0; counter < len; counter++ )
        cout << "*";
    cout << endl;

    system("pause");
    return 0;
}
