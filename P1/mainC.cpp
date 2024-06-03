// header untuk fungsi" operasi input-output C
#include <stdio.h> 
// header file untuk fungsi" manipulasi layar dan input dari keyboard dalam MS-DOS
#include <conio.h> 

// fungsi utama
int main() {
    // Deklarasi array dan variabel untuk nim, kom, ip dan array nama[] (karena bahasa C tidak ada string)
    char nama[50];
    int nim;
    char kom;
    float ip;

    // printf --> Mencetak/menampilkan output ke layar
    printf("Hello World\n"); // "\n" --> newline

    printf("Masukkan nama : ");
    // scanf("%s", &nama);

    // gets --> Membaca string yang diinput oleh pengguna dan menyimpan ke variabel yang ditentukan
    gets(nama);     //*  gets = get string 
    printf("Masukkan NIM : ");
    //scanf --> Membaca inputan // "%d" --> tipe data // &nim --> variabel yg menerima input 
    scanf("%d", &nim); 

    printf("Masukkan KOM : ");
    scanf(" %c", &kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    // printf("Nama : %s\n", nama);
    printf("Nama : ");
    //puts --> Mencetak string yang disimpan di variabel ke layar, diikuti dengan newline
    puts(nama);     //* puts = put string 

    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.3f\n", ip);

    printf("Press any button to continue...");
    //getch() --> getcharacter, menerima input karakter dan menunggu tombol Enter sebelum melanjutkan
    getch();
}