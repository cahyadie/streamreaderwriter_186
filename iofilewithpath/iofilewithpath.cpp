#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile,ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "_";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter 
		if (baris == "q") break;
		//menulis dan memasukan nilai dari baris ke file
		outfile << baris << endl;
	}
	//selasi dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode baca 
	ifstream infile;
	//menunjuk kesebuah file
	infile.open(NamaFile,ios::in);

	cout << endl << ">= Membuka dan Membaca file" << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris 
		while (getline(infile, baris))
		{
			//dan tampilkan di sini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selsai
		infile.close();
	}
	//jika tidak di temukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}  