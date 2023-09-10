#include <iostream>

using namespace std;

class Calculator {
private:
    double num1;
    double num2;
public:
    double add() {
        cout << "num1 + num2 = " << num1 + num2 << endl;
        return 0;
    }
    double multiply() {
        cout << "num1 * num2 = " << num1 * num2 << endl;
        return 0;
    }
    double subtract_1_2() {
        cout << "num1 - num2 = " << num1 - num2 << endl;
        return 0;
    }
    double subtract_2_1() {
        cout << "num2 - num1 = " << num2 - num1 << endl;
        return 0;
    }
    double divide_1_2() {
        cout << "num1 / num2 = " << num1 / num2 << endl;
        return 0;
    }
    double divide_2_1() {
        cout << "num2 / num1 = " << num2 / num1 << endl;
        return 0;
    }
    bool set_num1(double number1) {
        if (number1 != 0) {
            num1 = number1;
            return true;
        }
        else {
            cout << "Error!" << endl;
            return false;
        }
    }
    bool set_num2(double number2){
        if (number2 != 0) {
            num2 = number2;
            return true;
        }
        else {
            cout << "Error!" << endl;
            return false;
        }
    }
};

int main()
{
    double n1 = 0, n2 = 0;
    Calculator objCalculator;
    while (true) {
        do {
            cout << "input num1: "; cin >> n1;
        } while (objCalculator.set_num1(n1) == false);
        do {
            cout << "input num2: "; cin >> n2;
        } while (objCalculator.set_num2(n2) == false);
        objCalculator.add();
        objCalculator.subtract_1_2();
        objCalculator.subtract_2_1();
        objCalculator.multiply();
        objCalculator.divide_1_2();
        objCalculator.divide_2_1();
    }
    return 0;
}
