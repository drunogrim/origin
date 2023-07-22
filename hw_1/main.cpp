#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int N_arr1=1, N_arr2=1, tmp =0;
	int *arr1 = new int[N_arr1];
	int *arr2 = new int[N_arr2];

	ifstream fin("in.txt");
	if (!fin.is_open()) {
		cout << "Can't open file!";
		return 0;
	}
	else {
		fin >> N_arr1;
		for (int i=0 ; i < N_arr1; i++) {
			fin >> arr1[i];
		}
		fin >> N_arr2;
		for (int i = 0; i < N_arr2; i++) {
			fin >> arr2[i];
		}
		fin.close();
/*first array*/
		tmp = arr1[0];
		for (int i = 0; i < N_arr1-1; i++) {
			arr1[i] = arr1[i+1];
		}
		arr1[N_arr1 - 1] = tmp;
/*second array*/
		tmp = arr2[N_arr2 - 1];
		for (int i = N_arr2 - 1; i > 0 ; i--) {
			arr2[i] = arr2[i - 1];
		}
		arr2[0] = tmp;
/*open "out.txt" to write*/
		ofstream fout("out.txt");
		fout << N_arr2 << endl;
		for (int i = 0; i < N_arr2; i++) {
			fout << arr2[i] << " ";
		}
		fout << endl;
		fout << N_arr1 << endl;
		for (int i = 0; i < N_arr1; i++) {
			fout << arr1[i] << " ";
		}
		fout << endl;
		fout.close();
	}
	delete[]arr1;
	delete[]arr2;
	cout << "Open \"out.txt\" to see result!";
	return 0;
}