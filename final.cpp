#include <iostream>
#include <string>
using namespace std;

int hitung(string a, int jumlah){
	cout << "Masukkan sebuah string: ";
	getline(cin, a);
	jumlah = a.length();
	return jumlah;
}

int main(){
	string a;
	int jumlah;
	cout << "Jumlah karakter adalah " << hitung(a, jumlah) << endl;
}
