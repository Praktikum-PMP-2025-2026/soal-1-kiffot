/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : 13224086
 *   Nama File           : soal1.c
 *   Deskripsi           : Sebuah gerbang keamanan memproses data satu peneliti. Tentukan status akhir peneliti berdasarkan 
 *                         level izin, suhu tubuh, kadar radiasi, dan jam kedatangan.
 * 
 */


 #include <stdio.h>
 #include <string.h>

 void status(int izin, int suhu, int radiasi, int jam){
    //logic branches
    if (radiasi>=6){
        printf("TOLAK\n");
    }else if (suhu >=390){
        printf("KARANTINA\n");
    }else if (izin==1 && (jam<6 || jam >20) ){
        printf("TOLAK\n");
    }else if (izin ==1){
        printf("MASUK\n");
    }else if (izin==2 && radiasi <=2 && (jam>=8&&jam<=18)){
        printf("MASUK\n");
    }else if (izin==2){
        printf("PEMERIKSAAN\n");
    }
    else if (izin ==3&&radiasi==0&&suhu<380){
        printf("MASUK\n");
    }
    else{
        printf("TOLAK\n");
    }



 }
 int main() {
    //initialize variabel
    int izin=0;
    int suhu=0;
    int radiasi=0;
    int jam=0;
    //scanf untuk menerima output
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);
    //memanggil prosedur status untuk cek status
    status(izin, suhu, radiasi, jam);
    }
 