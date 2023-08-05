#include <iostream>
#include <fstream>
#include <windows.h>
#include <locale>

using namespace std;

class Adress {
	int num_h;
	int num_ap;
	string street;
	string city;
public:
	Adress() {
		num_h = 0;
		num_ap = 0;
		street = "???";
		city = "???";
	}
	void set_num_h(int n) {
		num_h = n;
	}
	void set_num_ap(int n) {
		num_ap = n;
	}
	void set_street(string n) {
		street = n;
	}
	void set_city(string n) {
		city = n;
	}
	int get_num_h() {
		return num_h;
	}
	int get_num_ap() {
		return num_ap;
	}
	string get_city() {
		return city;
	}
	string get_street() {
		return street;
	}
};

void sort(Adress* addresses, int size) {
	Adress swp;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (addresses[i].get_city().compare(addresses[j].get_city()) > 0)
			{
				swp = addresses[i];
				addresses[i] = addresses[j];
				addresses[j] = swp;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(866);
	unsigned int N = 1, a = 1;
	string b;
	ifstream fin("in.txt");
	if (!fin.is_open()) {
		cout << "Can't open file!";
		return 0;
	}
	else {
		fin >> N;
		Adress* adr = new Adress[N];
		for (int i = 0; i < N; i++) {
			fin >> b; adr[i].set_city(b);
			fin >> b; adr[i].set_street(b);
			fin >> a; adr[i].set_num_h(a);
			fin >> a; adr[i].set_num_ap(a);
		}
		fin.close();
		
		ofstream fout("out.txt");
		fout << N << endl;
		sort(adr, N);
		for (int i = 0; i < N; i++) {
			fout << adr[i].get_city() << ", " << adr[i].get_street() << ", " << adr[i].get_num_h() << ", " << adr[i].get_num_ap() << endl;
		}
		fout.close();
		delete[] adr;
	}
	return 0;
}
