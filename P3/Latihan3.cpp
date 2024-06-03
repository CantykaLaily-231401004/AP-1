#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float berat, tinggi, bmi;

    cout << "Masukkan berat badan anda (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi anda (m): ";
    cin >> tinggi;

    bmi = berat / ( tinggi * tinggi);
    //setprecision() --> untuk menentukan angka di belakang koma
    cout << fixed << setprecision(2);  

    cout << "BMI anda: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori berat badan: Berat badan kurang" << endl;
    } else if (bmi <= 18.5 && bmi < 25 ) {
        cout << "Kategori berat badan: Berat badan normal" << endl;
    } else if (bmi <=25 && bmi < 30) {
        cout << "Kategori berat badan: Berat badan berlebih" << endl;
    } else if (bmi >= 30) {
        cout << "Kategori berat badan: Obesitas" << endl;
    }

    return 0;
}
