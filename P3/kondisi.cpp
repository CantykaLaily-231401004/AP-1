#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan Nilai: ";
    cin >> nilai;

    // If Statement --> mengecek kondisi if jika benar akan dieksekusi
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    }

    // If-Else Statement --> pernyataan 1 pada kondisi if akan dilaksanakan jika dan hanya jika kondisi yang diinginkan terpenuhi, jika tidak lakukan pernyataan 2 (else)
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    } else {
        cout << "Anda Lulus" << endl;
    }


    // If-Else-If Statement --> mengecek kondisi berturut-turut dan mengeksekusi blok kode yang sesuai dengan kondisi pertama yang benar (true)
    if (nilai == 100) {
        cout << "Anda Hebat" << endl;
    } else if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    } else {
        cout << "Anda Lulus" << endl;
    }


    // Nested If Statement --> pernyataan if di dalam pernyataan if lainnya
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    } else {
        if (nilai == 100) {
            cout << "Anda Lulus dan Anda Hebat" << endl;
        } else {
            cout << "Anda Lulus" << endl;
        }
    }


    // Switch Case -->  mengecek data yang tipenya karakter dan juga integer
    switch (nilai) {
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default:
            cout << "Inputan TIDAK VALID" << endl;
            break;      // Opsional
    }


    // Switch Case For Range --> switch dgn rentang tertentu
    switch (nilai) {
        case 85 ... 100:
            cout << "A" << endl;
            break;
        case 80 ... 84:
            cout << "B+" << endl;
            break;
        case 75 ... 79:
            cout << "B" << endl;
            break;
        case 70 ... 74:
            cout << "C+" << endl;
            break;
        case  65 ... 69:
            cout << "C" << endl;
            break;
        case 60 ... 64:
            cout << "D" << endl;
            break;
        default:
            cout << "E" << endl;
            break;
    }

    // Ternary Operator --> operator untuk mengevaluasi ekspresi berdasarkan kondisi tertentu dan mengembalikan nilai yang sesuai
    // condition ? expression1 : expression2;
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " adalah bilangan " << checkNum << endl;
}