#include <iostream>
// header untuk fungsi matematika
#include <math.h>
// file header dalam C/C++ yang berisi fungsi untuk penanganan karakter
#include <cctype>

using namespace std;

/*  void --> digunakan untuk fungsi yg tdk mempunyai nilai kembalian
Deklarasi fungsi yang akan digunakan nama fungsi, tipe kembalian (jika ada), dan parameter yang diperlukan oleh fungsi tersebut
Deklarasikan fungsi sebelum main dan isi fungsi di setelah main

tipe_data nama_fungsi (parameter) {
    ...
} */

void garis();
void bintang();
void menu();
// Parameter Formal --> parameter yg menerima input pada saat fungsi dipanggil 
int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(int a, int b);
int modulo(int a, int b);
int pangkat(int a, int b);

int main() {
    char cont;
    // loop do-while agar pengguna dapat melakukan operasi kalkulator berulang kali
    do {
        system("cls");
        // memanggil fungsi menu
        menu();

        int operation, a, b, hasil;
        cout << "Masukkan operasi : ";
        cin >> operation;

        cout << "Masukkan angka pertama : ";
        cin >> a;

        cout << "Masukkan angka kedua : ";
        cin >> b;

        // Melakukan operasi yang dipilih menggunakan switch-case
        switch(operation) {
            case 1:
                // parameter aktual --> parameter yang memberikan input pada parameter formal suatu fungsi saat fungsi dipanggil
                hasil = tambah(a, b);
                break;
            case 2:
                hasil = kurang(a, b);
                break;
            case 3:
                hasil = kali(a, b);
                break;
            case 4:
                hasil = bagi(a, b);
                break;
            case 5:
                hasil = modulo(a, b);
                break;
            case 6:
                hasil = pangkat(a, b);
                break;
        }

        cout << "Hasil = " << hasil << endl;

        // Memanggil fungsi bintang
        bintang();

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;
        // toupper() --> mengubah karakter menjadi huruf besar
    } while(toupper(cont) == 'Y');

    cout << "Terima kasih telah menggunakan program kalkulator" << endl;
    return 0;
}

void garis() {
    cout << "====================================" << endl;
}

void bintang() {
    cout << "************************************" << endl;
}

void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis();
    cout << "1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \n5. Modulo \n6. pangkat" << endl;
    garis();
}

int tambah(int a, int b) {
    return a + b; // Mengembalikan hasil penambahan dua angka
}

int kurang(int a, int b) {
    return a - b; // Mengembalikan hasil pengurangan dua angka
}

int kali(int a, int b) {
    return a * b; // Mengembalikan hasil perkalian dua angka
}

float bagi(int a, int b) {
    // Mengembalikan hasil pembagian dua angka, hasilnya dalam float agar hasil akhirnya dapat berkoma
    return static_cast<float>(a) / static_cast<float>(b);
}

int modulo(int a, int b) {
    // Mengembalikan hasil modulo dua angka
    return a % b; 
}

int pangkat(int a, int b) {
    // Mengembalikan hasil perpangkatan dua angka
    return pow(a, b);
}