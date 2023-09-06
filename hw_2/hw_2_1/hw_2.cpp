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
        cout << "������� �����: ";
        cin >> k;
        Year month = static_cast<Year>(k);
        switch (month) {
        case Year::Jan: cout << "������"; 
            break;
        case Year::Feb: cout << "�������"; 
            break;
        case Year::Mar: cout << "����"; 
            break;
        case Year::Apr: cout << "������"; 
            break;
        case Year::May: cout << "���"; 
            break;
        case Year::Jun: cout << "����"; 
            break;
        case Year::Jul: cout << "����"; 
            break;
        case Year::Aug: cout << "������"; 
            break;
        case Year::Sep: cout << "��������"; 
            break;
        case Year::Oct: cout << "�������"; 
            break;
        case Year::Nov: cout << "������"; 
            break;
        case Year::Dec: cout << "�������"; 
            break;
        case Year::Err: cout << "�� ��������!"; 
            return 0;
        default: cout << "������������ �����!"; 
            break;
        }
        cout << endl;
    }
    return 0;
}

