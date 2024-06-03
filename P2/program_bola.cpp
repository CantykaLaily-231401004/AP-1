#include <iostream>
using namespace std;

int main () 
{
    const float PHI = 3.14;
    int r;
    float luas_permukaan, volume;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    luas_permukaan = (4*(PHI*(r*r)));

    volume = ((4/3)*(PHI*(r*r*r)));

    cout << "Luas permukaan bola = " << luas_permukaan << endl;
    cout << "Volume bola = " << volume << endl;
    //fungsi tidak mengembalikan nilai apa pun
    return 0;
}