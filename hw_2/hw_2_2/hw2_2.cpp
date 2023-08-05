#include <iostream>

using namespace std;

struct b_acc {
    int id;
    string name;
    double balance;
};

int main()
{
    b_acc acc1 = { 000, "ivan", 000 };
    b_acc* a_acc1 = &acc1;
    cout << "input ID: "; cin >> acc1.id;
    cout << "input name: "; cin >> acc1.name;
    cout << "input balance: "; cin >> acc1.balance;
    cout << "input new balance: "; cin >> a_acc1->balance;
    cout << "Your bank acc: " << acc1.name <<", " << acc1.id << ", " << acc1.balance;
    cout << endl;
    return 0;
}
