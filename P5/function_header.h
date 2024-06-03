int kali(int a, int b) {
    return a * b;
}

float bagi (int a, int b) { //cara pertama float a, float b
    // return (float) a / (float) b; //type casting ngubah variavel scr paksa
    return static_cast<float>(a) / static_cast<float>(b); //static cast untuk ganti data dalam kurung variabel yg mw diganti
}