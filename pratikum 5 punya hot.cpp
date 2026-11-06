#include <iostream>
#include <string>
using namespace std;

int main () {
	string nama, hadiah;
	float a, b, c, rata;
	
	cout <<"PROGRAM HITUNG NILAI RATA-RATA\n\n";
	cout << "Nama Siswa :";
	getline(cin, nama);
	cout << "Nilai Pertandingan I : ";
	cin >>a;
	cout << "Nilai Pertandingan II : ";
	cin >>b;
	cout << "Nilai Pertandingan III : ";
	cin >>c;
	
	rata = (a + b + c) / 3;
	
	if (rata >=85) hadiah =
	"Seperangkat Mobil";
	else if (rata >70) hadiah =
	"Seperangkat Uang Sebesar Rp. 500,000";
	else hadiah = "Hiburan";
	
	cout << "\nSiswa yang bernama";
	cout<< nama << "\n";
	cout<< "Memperoleh nilai rata-rata"<<rata <<" dari hasil\n";
	cout<<"perlombaan yang diikutinya.\n";
	cout<< "Hadiah yang didapat adalah "<<hadiah<<endl;
	return 0;
}
