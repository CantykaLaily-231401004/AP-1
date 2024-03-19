// #include <iostream>
// using namespace std;

// int main(){
//     int gol, J_anak;
//     char nama[30];
//     float gaji_total, gaji_pokok, tambahan_uang;

//     cout<<"Masukkan Nama Anda: ";
//     cin>>nama;

//     cout<<"Masukkan Golongan (1,2,3): ";
//     cin>>gol;

//     cout<<"Jumlah anak: ";
//     cin>>J_anak;

//     if (gol == 1) 
//     {
//         gaji_pokok = 5000000;
//     }
//         else if (gol == 2)
//         {
//             gaji_pokok = 3000000;
//         }
//             else if (gol == 3)
//             {
//                 gaji_pokok = 2500000;
//             }
//     if (J_anak == 1 && J_anak == 2)
//     {
//         tambahan_uang = 500000;
//     }
//         else if (J_anak > 2)
//         {
//             750000;
//         }
    
//     gaji_pokok=(gaji_pokok+tambahan_uang);
//     gaji_total=gaji_pokok-(gaji_pokok*0.05);

//     cout<<"Gaji Total: "<<gaji_total<<endl;

// }

// #include <iostream>
// #include <iomanip>

// using namespace std;

// int main() {
//   int gol, J_anak;
//   char nama[30];
//   float gaji_total, gaji_pokok, tambahan_uang;

//   // Memasukkan nama karyawan
//   cout << "Masukkan Nama Anda: ";
//   cin >> nama;

//   // Memasukkan golongan karyawan
//   cout << "Masukkan Golongan (1,2,3): ";
//   cin >> gol;

//   // Memasukkan jumlah anak karyawan
//   cout << "Jumlah anak: ";
//   cin >> J_anak;

//   // Menentukan gaji pokok berdasarkan golongan
//   switch (gol) {
//     case 1:
//       gaji_pokok = 5000000;
//       break;
//     case 2:
//       gaji_pokok = 3000000;
//       break;
//     case 3:
//       gaji_pokok = 2500000;
//       break;
//     default:
//       cout << "Golongan tidak valid!" << endl;
//       return 1;
//   }

//   // Menentukan tunjangan anak
//   switch (J_anak) {
//     case 0:
//       tambahan_uang = 0;
//       break;
//     case 1:
//     case 2:
//       tambahan_uang = 500000;
//       break;
//     default:
//       tambahan_uang = 750000;
//   }

//   // Menghitung gaji total
//   gaji_pokok = (gaji_pokok + tambahan_uang);
//   gaji_total = gaji_pokok - (gaji_pokok * 0.05);

//   // Menampilkan gaji total dengan format yang sesuai
//   cout << fixed << setprecision(0);
//   cout << "Gaji Total: Rp " << gaji_total << endl;

//   return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
system ("CLS");
int gol, J_anak;
float gaji_pokok, tunjangan_anak, gaji_bersih, gaji_kotor, pajak;
cout<<"Masukkan Golongan (1/2/3): ";
cin>>gol;
cout<<"Masukkan Jumlah Anak: ";
cin>>J_anak;
if (gol == 1) {
gaji_pokok = 5000000;
}
else if (gol == 2) {
gaji_pokok = 3000000;
}
else if (gol == 3) {
gaji_pokok = 2500000;
}
if (J_anak == 1) {
tunjangan_anak = 500000;
}
else if (J_anak == 2) {
tunjangan_anak = 500000;
}
else if (J_anak > 2) {
tunjangan_anak = 750000;
}
gaji_kotor = gaji_pokok+tunjangan_anak;
pajak = gaji_kotor*0.05;
gaji_bersih = gaji_kotor-pajak;
cout<<fixed<<setprecision(0);
cout<<"Gaji Pokok: Rp. " <<setw(10)<<gaji_pokok<<endl;
cout<<"Tunjangan Anak: Rp. "<<setw(10)<<tunjangan_anak<<endl;
cout<<"Gaji Kotor: Rp. "<<gaji_kotor<<setw(10)<<endl;
cout<<"Gaji Bersih: Rp. "<<gaji_bersih<<setw(10)<<endl;
return(0);
}