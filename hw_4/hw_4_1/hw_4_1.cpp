#include <iostream>
#include <fstream>

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


int main()
{
	int N, a;
	string b;
	ifstream fin("in.txt");
	if (!fin.is_open()) {
		cout << "Can't open file!";
		return 0;
	}
	else {
		fin >> N;
		Adress* adr  = new Adress[N];
		for (int i = 0; i < N; i++) {
			fin >> b; adr[i].set_city(b);
			fin >> b; adr[i].set_street(b);
			fin >> a; adr[i].set_num_h(a);
			fin >> a; adr[i].set_num_ap(a);
		}
		fin.close();
		ofstream fout("out.txt");
		fout << N << endl;
		for (int i = N-1; i >= 0; i--) {
			fout << adr[i].get_city() << ", " << adr[i].get_street() << ", " << adr[i].get_num_ap() << ", " << adr[i].get_num_h() << endl;
		}
		fout.close();
		cout << "Out.txt created!";
	}
	return 0;
}
