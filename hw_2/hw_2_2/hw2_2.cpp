#include <iostream>

using namespace std;

struct b_acc {
    int id;
    string name;
    double balance;
};

void input_id(b_acc& acc){
    cout << "input ID: ";
    cin >> acc.id;
}

void input_name(b_acc& acc){
    cout << "input Name: ";
    cin >> acc.name;
}
void input_balance(b_acc& acc){
    cout << "input Balance: ";
    cin >> acc.balance;
}
void input_newbalance(b_acc& acc){
    cout << "input new balance: ";
    cin >> acc.balance;
}
void output_acc(b_acc acc) {
    cout << endl <<  "Your bank acc: " << acc.name << ", " << acc.id << ", " << acc.balance;
}

int main()
{
    b_acc account = { 000, "ivan", 000 };
    input_id(account);
    input_name(account);
    input_balance(account);
    input_newbalance(account);
    output_acc(account);
    cout << endl;
    return 0;
}
