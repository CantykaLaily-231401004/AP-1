// Header untuk input-output CPP
#include <iostream>
// Untuk menghindari penulisan std:: di depan fungsi gunakan using namespace std
using namespace std;

int main() {
    // Deklarasi variabel 
    string nama;
    int nim;
    char kom;
    float ip;

    // cout --> Mencetak/menampilkan output ke layar
    cout << "Hello World" << endl; // endl --> newline

    cout << "Masukkan Nama : ";
    // cin >> nama;
    // getline --> Membaca seluruh input termasuk spasi dan disimpan di variabel
    getline(cin, nama); 

    cout << "Masukkan NIM : ";
    // Membaca inputan dan disimpan di variabel
    cin >> nim;

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "NAMA : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    cout << "IP : " << ip << endl;
}