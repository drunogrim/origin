#include <iostream>

using namespace std;

class Counter {
private:
	int num;
public:
	void counter_up() {
		num++;
	}
	void counter_down() {
		num--;
	}
	void counter_print() {
		cout << "Counter: " << num << endl;
	}
	Counter() {
		num = 0;
	}
	Counter(int start_int) {
		num = start_int;
	}
};


int main()
{
	string ch, str;
	int n = 0;
	Counter ctr;
	cout << "Start with some number? For change default (0) input 'y' : "; cin >> str;
	if (str == "y") {
		cout << "Input something int n: ";
		cin >> n;
		ctr = Counter(n);
	}
	while (true) {
		cout << "Input some operation: "; cin >> ch;
		if (ch == "+") {
			ctr.counter_up();
		}
		else if(ch == "-"){
			ctr.counter_down();
		}
		else if (ch == "=") {
			ctr.counter_print();
		}
		else if (ch == "x") {
			cout << "Game over!" << endl;
			break;
		}
	}
	return 0;
}

