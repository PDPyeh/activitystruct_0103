#include<iostream>
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
	cin >> mhs.nim;
	cout << "Nama Mahasiswa = ";
	cin >> mhs.nama;

	cout << "Alamat Mahasiswa = ";
	cout << "\t nama Desa = ";
	cin >> mhs.alamat.desa;
	cout << "\t nama Kota = ";
	cin >> mhs.alamat.kota;


	cout << "Umur Mahsiswa = ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n NIM = " << mhs.nim;
	cout << "\n Nama = " << mhs.nama;
	cout << "\n Alamat = " << mhs.
	cout << "\n Umur = " << mhs.umur;
}