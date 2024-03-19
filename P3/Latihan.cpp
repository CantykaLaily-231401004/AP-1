#include <iostream>

using namespace std;

int main () {
    int nilai;
    cout << "Masukkan Nilai: ";
    cin>> nilai;
//if statement
    // if (nilai <= 65) {
    //     cout << "Anda TIDAK Lulus" << endl;
    // }

//if-else satatement
    // if (nilai <= 65) {
    //     cout << "Anda TIDAK Lulus" << endl;
    // }
    // else {
    //     cout << "Anda Lulus"<< endl;
    // }

// if-else if statemnet
    // if (nilai == 100) 
    // {
    //     cout << "Anda Hebat" << endl;
    // }
    // else if (nilai <= 65){
    //     cout << "Anda TIDAK Lulus"<< endl;
    // }
    // else {
    //     cout << "Anda LULUS" << endl;
    // }

//Nested file
    // if (nilai <= 65){
    //     cout << "Anda tidak lulus" << endl;
    // }

    // else {
    //     if (nilai == 100) {
    //         cout << "Anda Lulus dan anda hebat" << endl;
    //     } 
    //     else {
    //         cout << "Anda Lulus" <<endl;
    //     }
    // }

//Switch CASE
    // switch (nilai) {
    //     case 1:
    //     cout << "Senin" << endl;
    //     break;
    //     case 2:
    //     cout << "Selasa" << endl;
    //     break;
    //     case 3:
    //     cout << "Rabu" << endl;
    //     break;
    //     case 4:
    //     cout << "Kamis" << endl;
    //     break;
    //     case 5:
    //     cout << "Jum'at" << endl;
    //     break;
    //     case 6:
    //     cout << "Sabtu" << endl;
    //     break;
    //     case 7:
    //     cout << "Minggu" << endl;
    //     break;
    //     default: cout << "Inputan tidak valid" << endl;
    //     break;
    // }

//Switch Case fpr range
    switch (nilai) {
        case 85 ... 100 :
        cout << "A" << endl;
        break;

        case 80 ... 84 :
        cout << "B+" << endl;
        break;

        case 75 ... 79:
        cout << "B" << endl;
        break;

        case  70 ... 74 :
        cout << "C+" << endl;
        break;

        case 65 ... 69 :
        cout << "C" << endl;
        break;

        case 60 ... 64 :
        cout << "C-" << endl;
        break;

        default : 
        cout << "E" << endl;
    }

//ternary operator
//if (kndisi) ? "if true" : "if false"

//( 54 > 50) ? "Iya" : "Tidak"

string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
cout << nilai << " adalah bilangan " << checkNum << endl;
}