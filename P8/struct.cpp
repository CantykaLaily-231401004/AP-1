#include <iostream>
#include <vector>

using namespace std;

// Struct --> sekumpulan variabel yang masing-masing dapat berbeda tipe, dan dikelompokkan ke dalam satu nama (dalam pascal record)

//? Struct Declaration
// mendefinisikan struktur data yang terdiri dari tiga anggota: nama (string), nim (string), dan nilai (float)
struct Mahasiswa {
    string nama, nim;
    float nilai;
};

// Deklarasi "mhs" untuk memberikan nama alternatif mhs pada struct Mahasiswa
// Agar mhs dapat digunakan sebagai pengganti struct Mahasiswa saat mendeklarasikan variabel atau parameter
typedef struct {
    string nama, nim;
    float nilai;
} mhs;


int main() {
    system("cls");

    //? Struct Initialization
    // Deklarasi variabel mhs dengan tipe Mahasiswa
    Mahasiswa mhs;
    // Deklarasi vector mahasiswa untuk menyimpan objek-objek Mahasiswa
    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        
        cin.get();
        cout << "Masukkan nama : ";
        // membaca input dari pengguna dan menyimpannya di dalam anggota variabel nama dari struct mhs
        getline(cin, mhs.nama);

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs);
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "NIM : " << mahasiswa[i].nim << endl;
        cout << "Nilai : " << mahasiswa[i].nilai << endl;
    }

    return 0;
}