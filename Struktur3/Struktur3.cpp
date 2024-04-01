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
	Mahasiswa mhs;
	cout << "Nomoer Mahasiswa = ";
	getline(cin, mhs.nim);
	cout << "Nama Mahasiswa = ";
	getline(cin, mhs.nama);

	cout << "Alamat Mahasiswa = " << endl;
	cout << "\t nama Desa = ";
	cin >> mhs.alamat.desa;
	cout << "\t nama Kota = ";
	cin >> mhs.alamat.kota;


	cout << "Umur Mahsiswa = ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n NIM = " << mhs.nim;
	cout << "\n Nama = " << mhs.nama;
	cout << "\n Alamat = ";
	cout << "\n Desa = " << mhs.alamat.desa;
	cout << "\n Kota = " << mhs.alamat.kota;
	cout << "\n Umur = " << mhs.umur;
}