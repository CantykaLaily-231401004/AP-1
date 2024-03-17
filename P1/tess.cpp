#include <conio.h>
#include <iostream>

using namespace std;
#define jumlah 10

int var_1, var_2;
char kalimat_1[jumlah], kalimat_2[jumlah];
long var3;

int fungsi1 ()
{
    bool logika1, logika2;
    cout<<"Masukkan nilai 1: ";
    cin>>var_1;
    cout<<"Masukkan nilai 2: ";
    cin>>var_2;
}

int main()
{
    fungsi1();
    var3=var_1+var_2;
    cout<<"nilai var 3 adalah "<<endl;
    getch();
}