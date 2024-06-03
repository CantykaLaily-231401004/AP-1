#include <iostream>
using namespace std;

int main(){
    int gol, J_anak;
    char nama[30];
    float gaji_total, gaji_pokok, tambahan_uang;

    cout<<"Masukkan Nama Anda: ";
    cin>>nama;

    cout<<"Masukkan Golongan (1,2,3): ";
    cin>>gol;

    cout<<"Jumlah anak: ";
    cin>>J_anak;

    if (gol == 1) 
    {
        gaji_pokok = 5000000;
    }
        else if (gol == 2)
        {
            gaji_pokok = 3000000;
        }
            else if (gol == 3)
            {
                gaji_pokok = 2500000;
            }
    if (J_anak == 1 && J_anak == 2)
    {
        tambahan_uang = 500000;
    }
        else if (J_anak > 2)
        {
            750000;
        }   
    gaji_pokok=(gaji_pokok+tambahan_uang);
    gaji_total=gaji_pokok-(gaji_pokok*0.05);

    cout<<"Gaji Total: "<<gaji_total<<endl;

}