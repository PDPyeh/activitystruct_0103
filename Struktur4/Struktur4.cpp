#include<iostream>
#include <string>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[43];
	for (int i = 0;i < 43;i++) {
		cout << "Data Mahasiswa Ke- " << (i + 1) << endl;
		cout << "Nomoer Mahasiswa = ";
		getline(cin, mhs[43].nim);
		cout << "Nama Mahasiswa = ";
		getline(cin, mhs[43].nama);

		cout << "Alamat Mahasiswa = ";
		cout << "\t nama Desa = ";
		cin >> mhs[43].alamat.desa;
		cout << "\t nama Kota = ";
		cin >> mhs[43].alamat.kota;
		cout << "Umur Mahsiswa = ";
		cin >> mhs[43].umur;
		cin.ignore(1, '\n');
		cout << endl;
	}
	for (int i = 0;i < 43;i++) {
		cout << endl;
		cout << "Data Mahasiswa Ke- " << (i + 1) << endl;
		cout << "\n NIM = " << mhs[43].nim;
		cout << "\n Nama = " << mhs[43].nama;
		cout << "\n Alamat = ";
		cout << "\n Desa = " << mhs[43].alamat.desa;
		cout << "\n Kota = " << mhs[43].alamat.kota;
		cout << "\n Umur = " << mhs[43].umur;
		cout << endl;
	}
}