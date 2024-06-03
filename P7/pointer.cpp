#include <iostream>
using namespace std;

//Mendefinisikan fungsi yang menerima dua argumen integer a dan b, dan mencetak hasil penjumlahan a + b 
void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

// Mendefinisikan fungsi yang menerima dua argumen pointer integer a dan b, dan menambahkan nilai yang ditunjuk oleh *a dan *b. Hasilnya kemudian disimpan di alamat yang ditunjuk oleh *a dan dicetak 
void penjumlahanPointer(int* a, int* b) {
    *a += *b;
    cout << *a << endl;
}

// Mendefinisikan fungsi yang menerima satu argumen pointer integer a, dan mengalikan nilai yang ditunjuk oleh *a dengan 2. Hasilnya kemudian disimpan di alamat yang ditunjuk oleh *a
void doubleValue(int* a) {
    *a *= 2;
}

int main() {
    system("cls");

    // Pointer --> sebuah variabel berisi alamat lain

    //? Pointer Declaration
    //* Normal Variable --> variable(data), &variable(alamat memori)
    int number = 35;
    //* Pointer Variable --> variable(alamat memori variabel yang ditunjuk), &variable(alamat memori), *variable(data variabel yang ditunjuk)
    int* pointer_number = &number;

    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    //? Pointer Operation
    // Mengubah nilai pada alamat memori yang ditunjuk oleh pointer_number menjadi 25
    *pointer_number = 25;
    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    //? Pointer in Array
    int num[] = {1, 2, 3, 4, 5};
    // Deklarasi variabel pointer integer pointer_num dan menginisialisasinya dengan alamat memori elemen pertama array num
    int* pointer_num = num;

    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    // cout << "Alamat memori variabel num = " << num << endl;      //* Same with above
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori vairabel pointer_num = " << &pointer_num << endl;

    *pointer_num += 5;
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori vairabel pointer_num = " << &pointer_num << endl;

    //? Pointer in Parameter
    int num1 = 5;
    int num2 = 7;

    penjumlahan(num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;

    penjumlahanPointer(&num1, &num2);
    cout << num1 << endl;
    cout << num2 << endl;

    //? Pointer in Pointer
    int score = 4;
    int* pointer_score = &score;
    int** ptr_pointer_score = &pointer_score;
    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    cout << "Isi variabel ptr_pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_pointer_score " << &ptr_pointer_score << endl;

    //? Dynamic Pointer
    int* ptr = new int;     //* Memory allocation
    *ptr = 30;
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;
    delete ptr;     //* Memory deallocation
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;

    //* Example Code
    int n;
    cout << "Masukkan sebuah angka : ";
    cin >> n;

    doubleValue(&n);
    cout << "Nilai angka setelah dikali 2 = " << n << endl;

    return 0;
}