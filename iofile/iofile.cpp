#include <fstream>
#include <iostream>
using namespace std;

int main() {
	string baris;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "_";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter 
		if (baris == "q") break;
		//menulis dan memasukan nilai dari baris ke file
	}
	//selasi dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode baca 
	ifstream infile;
	//menunjuk kesebuah file
	infile.open("contohfile.txt");

		cout << endl << ">= Membuka dan Membaca file" << endl;
	//jika file ada maka
	if (infile.is_open())
	{

	}
} 