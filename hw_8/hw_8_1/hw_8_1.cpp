#include <iostream>
#include <string>

using namespace std;

int function(string str, int forbidden_length) {
	if (forbidden_length <= 0) {
		throw 0;
	}
	if (str.size() == forbidden_length) {
		throw exception();
	}
	else return str.size();
}

int main()
{
	int forb_len = 0;
	string str1;
	do {
		cout << "Input forbidden length: "; cin >> forb_len;
		cout << "input word: "; cin >> str1;
		try {
			cout << "Word length " << str1 << " is: " << function(str1, forb_len) << endl << endl;
		}
		catch (const exception& err) {
			cout << "Bad length! Good Bye!" << endl;
			break;
		}
		catch (int code) {
			cout << "Unsupported  length for this world... Try again, please!" << endl << endl;
		}
	} while (true);
}
