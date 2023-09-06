#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

enum class Year {
    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    Jun = 6,
    Jul = 7,
    Aug = 8,
    Sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12,
    Err = 13
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(866);
    int k = 0;
    while (true) {
        cout << "Введите месяц: ";
        cin >> k;
        Year month = static_cast<Year>(k);
        switch (month) {
        case Year::Jan: cout << "Январь"; 
            break;
        case Year::Feb: cout << "Февраль"; 
            break;
        case Year::Mar: cout << "Март"; 
            break;
        case Year::Apr: cout << "Апрель"; 
            break;
        case Year::May: cout << "Май"; 
            break;
        case Year::Jun: cout << "Июнь"; 
            break;
        case Year::Jul: cout << "Июль"; 
            break;
        case Year::Aug: cout << "Август"; 
            break;
        case Year::Sep: cout << "Сентябрь"; 
            break;
        case Year::Oct: cout << "Октябрь"; 
            break;
        case Year::Nov: cout << "Ноябрь"; 
            break;
        case Year::Dec: cout << "Декабрь"; 
            break;
        case Year::Err: cout << "До свидания!"; 
            return 0;
        default: cout << "Неправильный номер!"; 
            break;
        }
        cout << endl;
    }
    return 0;
}

