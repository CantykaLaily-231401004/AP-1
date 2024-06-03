#include <iostream>
// file header <vector> untuk dapat menggunakan struktur data vector dari Standar Library C++
#include <vector>

using namespace std;

int main() {
    system("cls");

    // Vektor --> cara kerja sama dengan array namun lebih dinamis, elemen dapat ditambah maupun dikurangi
    
    //? Vector Declaration and Initialization
    // mendeklarasikan dan menginisialisasi sebuah vektor bernama nama_karyawan yang menyimpan string
    vector<string> nama_karyawan = {"Andi", "Budi", "Santi", "Doni", "Yanto"};

    //? Accessing Elements of Vector
    // mencetak setiap elemen dari vektor nama_karyawan ke layar, satu per satu, menggunakan indeks i
    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }

    // mencetak setiap elemen dari vektor nama_karyawan ke layar, satu per satu, menggunakan loop for each
    for (string karyawan : nama_karyawan) {     //* For Each Loop
        cout << karyawan << endl;
    } 

    //? Add Data to Vector
    // push_back() --> menambahkan string sebagai elemen terakhir dari vektor
    nama_karyawan.push_back("Wawan");

    //? Delete Data from Vector
    nama_karyawan.pop_back();       //* Menghapus data vector paling akhir
    nama_karyawan.erase(nama_karyawan.begin() + 3);     //* begin() untuk mendapatkan data paling awal, erase() untuk menghapus data
}