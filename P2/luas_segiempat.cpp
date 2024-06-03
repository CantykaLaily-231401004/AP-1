#include <iostream>
using namespace std;

int main () {
    int p, l;
    float luas;

    //? const float PHI = 3.14

    cout << "Masukkan panjang : ";
    cin >> p;
    cout << "Masukkan lebar : ";
    cin >> l;

    // Rumus luas segi empat
    luas = p * l;

    cout << "Luas = " << luas << endl;

    return 0;
}