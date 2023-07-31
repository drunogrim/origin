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
    Dec = 12
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
        switch (static_cast<int>(month)) {
        case 1: cout << "Январь"; 
            break;
        case 2: cout << "Февраль"; 
            break;
        case 3: cout << "Март"; 
            break;
        case 4: cout << "Апрель"; 
            break;
        case 5: cout << "Май"; 
            break;
        case 6: cout << "Июнь"; 
            break;
        case 7: cout << "Июль"; 
            break;
        case 8: cout << "Август"; 
            break;
        case 9: cout << "Сентябрь"; 
            break;
        case 10: cout << "Октябрь"; 
            break;
        case 11: cout << "Ноябрь"; 
            break;
        case 12: cout << "Декабрь"; 
            break;
        case 0: cout << "До свидания!"; 
            return 0;
        default: cout << "Неправильный номер!"; 
            break;
        }
        cout << endl;
    }
    return 0;
}

