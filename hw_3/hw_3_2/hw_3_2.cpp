#include <iostream>

using namespace std;

class Counter {
private:
	int num;
public:
	int operation(string op) {
		if (op == "+") {
			num++;
		}
		else if(op == "-") {
			num--;
		}
		else if (op == "=") {
			cout << num << endl;;
		}
		else{
			cout << "Goodbye!" << endl;;
			return 0;
		}
	}
	void set_num(int number) {
		num = number;
	}
};


int main()
{
	int n;
	string ch;
	string str;
	Counter oper;
	cout << "start with number? y/n: "; cin >> str;
	if (str == "y") {
		cout << "Input something int n: "; cin >> n;
		oper.set_num(n);
	}
	do {
		cout << "Input some op: "; cin >> ch;
		oper.operation(ch);
	} while (ch != "x");
	return 0;
}

