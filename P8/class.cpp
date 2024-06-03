#include <iostream>
#include <vector>

using namespace std;

// Class --> suatu metode untuk mengorganisasi data (variabel) dan fungsi (function) dalam struktur yang sama

class Mahasiswa {
    //? Access Modifier
    // private --> hanya dapat diakses dari dalam kelas itu sendiri
    private:
        string nama, nim;
        float nilai;

    //? Access Modifier
    // public --> dapat diakses dari luar kelas
    public:
        //? Constructor -> Fungsi yang langsung dipanggil ketika class diinstansiasi
        Mahasiswa(string nama, string nim, float nilai) {
            // this -> digunakan untuk mengacu pada anggota kelas (variabel) nama dari objek saat ini
            this->nama = nama;
            this->nim = nim;
            this->nilai = nilai;
        }

        //? Getter Function -> berfungsi untuk mengembalikan data sebuah variabel yang memiliki akses private
        string getName() {
            return this->nama;
        }

        void display() {
            cout << "Nama   : " << this->nama << endl;
            cout << "NIM    : " << this->nim << endl;
            cout << "Nilai  : " << this->nilai << endl;
        }
};

int main() {
    system("cls");

    // Deklarasi objek Mahasiswa bernama siswa1 dan menginisialisasinya dengan nilai nama, NIM, dan nilai
    Mahasiswa siswa1("Andi", "231401111", 45.6);
    // Memanggil fungsi display() dari objek siswa1 untuk menampilkan informasi mahasiswa 
    siswa1.display();

    // //! Error
    // // error karena variabel nama dideklarasikan sebagai private dan tidak dapat diakses dari luar kelas
    // cout << siswa1.nama << endl;
    // // error karena akses dan modifikasi variabel nama harus dilakukan melalui fungsi getName() dan setName() yang disediakan
    // siswa1.nama = "Budi";
    // cout << siswa1.nama << endl;

    // Memanggil fungsi getName() dari objek siswa1 untuk mendapatkan nilai variabel nama dan mencetaknya 
    cout << siswa1.getName() << endl;

    // Deklarasi vector mahasiswa untuk menyimpan objek-objek Mahasiswa
    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        // cin.get() --> digunakan untuk mengabaikan karakter newline yang tersisa di buffer input setelah membaca n
        cin.get();
        cout << "Masukkan nama : ";
        // getline --> digunakan untuk membaca string yang mengandung spasi
        getline(cin, nama);

        cout << "Masukkan NIM : ";
        cin >> nim;

        cout << "Masukkan nilai : ";
        cin >> nilai;

        Mahasiswa mhs(nama, nim, nilai);
        // push_back() --> menambahkan objek Mahasiswa baru ke vector mahasiswa
        mahasiswa.push_back(mhs);
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        // Memanggil fungsi display() dari objek Mahasiswa pada indeks ke-i dalam vector mahasiswa untuk menampilkan informasi mahasiswa 
        mahasiswa[i].display();
    }

    return 0;
}