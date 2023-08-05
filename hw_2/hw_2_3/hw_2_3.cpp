#include <iostream>

using namespace std;

struct adress {
    string city;
    string street;
    int house;
    int apartment;
    int index;
};

void cout_struct(adress adr) {
    cout << "City: "<< adr.city << endl;
    cout << "Street: " << adr.street << endl;
    cout << "House number: " << adr.house << endl;
    cout << "Apartment number: " << adr.apartment << endl;
    cout << "index: " << adr.index << endl;
}

int main()
{
    adress card_1 = { "Moscow","Arbat", 12,8,123456 };
    adress card_2 = {"Izhevsk","Pushkina", 59,143,953769};
    cout_struct(card_1);
    cout << endl;
    cout_struct(card_2);
    return 0;
}

