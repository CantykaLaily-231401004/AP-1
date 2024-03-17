// #include <stdio.h>

// int main (){
//     printf("Hello World");
// }

// 

#include <stdio.h>

int main () {
    int nama[50];
    char kom;
    float ip;

printf("Masukkan nama: ");
// scanf("%s", &nama);
gets(nama); //gets= get string
    printf("Masukkan NIM: ");
    scanf("%d", &nim);

    printf("Masukkan KOM: ");
    scanf(" %c", &kom);

    printf("Masukkan IP: ");
    scanf("%f", &ip);
// printf("Nama: %s\n", nama);
printf("Nama: ");
puts(nama);
    printf("NIM: %d\n", nim);
    printf("KOM: %c\n", kom);
    printf("IP: %3.f\n", ip);

    printf("Press any button to continue...");
    getch();
}

