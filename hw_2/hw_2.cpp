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
        cout << "������� �����: ";
        cin >> k;
        Year month = static_cast<Year>(k);
        switch (static_cast<int>(month)) {
        case 1: cout << "������"; 
            break;
        case 2: cout << "�������"; 
            break;
        case 3: cout << "����"; 
            break;
        case 4: cout << "������"; 
            break;
        case 5: cout << "���"; 
            break;
        case 6: cout << "����"; 
            break;
        case 7: cout << "����"; 
            break;
        case 8: cout << "������"; 
            break;
        case 9: cout << "��������"; 
            break;
        case 10: cout << "�������"; 
            break;
        case 11: cout << "������"; 
            break;
        case 12: cout << "�������"; 
            break;
        case 0: cout << "�� ��������!"; 
            return 0;
        default: cout << "������������ �����!"; 
            break;
        }
        cout << endl;
    }
    return 0;
}

