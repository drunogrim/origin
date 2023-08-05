#include <iostream>
#include <fstream>

using namespace std;

class Adress {
	int num_h;
	int num_ap;
	string street;
	string city;
public:
	void get_num_h(int n) {
		num_h = n;
	}
	void get_num_ap(int n) {
		num_ap = n;
	}
	void get_street(string n) {
		street = n;
	}
	void get_city(string n) {
		city = n;
	}
	int put_num_h() {
		return num_h;
	}
	int put_num_ap() {
		return num_ap;
	}
	string put_city() {
		return city;
	}
	string put_street() {
		return street;
	}


};


int main()
{
	int N, a;
	string b;
	ifstream fin("in.txt");
	Adress adr[30];
	if (!fin.is_open()) {
		cout << "Can't open file!";
		return 0;
	}
	else {
		fin >> N;
		for (int i = 1; i <= N; i++) {
			fin >> b; cout << "check: " << b << endl; adr[i].get_city(b);
			fin >> b; cout << "check: " << b << endl; adr[i].get_street(b);
			fin >> a; cout << "check: " << a << endl; adr[i].get_num_h(a);
			fin >> a; cout << "check: " << a << endl << endl; adr[i].get_num_ap(a);
		}
		fin.close();
		ofstream fout("out.txt");
		fout << N << endl;
		for (int i = N; i > 0; i--) {
			fout << adr[i].put_city() << ", " << adr[i].put_street() << ", " << adr[i].put_num_ap() << ", " << adr[i].put_num_h() << endl;
			//cout << "result: "<< adr[i].put_city() << ", " << adr[i].put_street() << ", " << adr[i].put_num_ap() << ", " << adr[i].put_num_h() << endl;
		}
		fout.close();
	}
	return 0;
}
