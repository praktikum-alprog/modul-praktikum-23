#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int jam_bekerja = 8;
float gaji_perjam = 10625;

struct hitung{
    float gaji_lembur;
    float gaji_utama;
    float gaji_total;
    float jam_kerja;
    float jam_lembur;
};

struct hitung h;

    void perhitungan_gaji();
    void perhitungan_gajiUtama();
    void perhitungan_gajiLembur();

int valid_int(int *var){
    char buff[20];
    char cek;
    fflush(stdin);
    if(fgets(buff, sizeof(buff), stdin)!=NULL){
        if(sscanf(buff, "%d %c", var, &cek)==1){
            return 1;
        }
    }
    return 0;
}

float valid_float(float *var)
{
    char buff[20];
    char cek;
    fflush(stdin);
    if(fgets(buff, sizeof(buff), stdin)!= NULL)
    {
        if(sscanf(buff,"%f %c",var,&cek)== 1)
        {
            return 1;
        }
    }
    return 0;
}

void input_jamKerja(float *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_float(var))
            break;
        printf("\t=================================\n");
        printf("\n       !Masukan jam saja, jangan yang lain!\n");
        printf("\n\t=================================");

        printf("\n");
    }
}


void input_pilihan(int *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_int(var))
            break;
        printf("\nSudah benar atau belum?!\n");
        printf("\n");
    }
}

void input_ulang(int *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_int(var))
            break;
        printf("\nMau mengulang atau tidak?!\n");
    }
}

void ulang(){
int mengulang;
    input_ulang(&mengulang, "\nIngin mengulang program?\n1. YA \n2. TIDAK\n""=> ");

    switch(mengulang){
    case 1:
        system("cls");
        perhitungan_gaji();
        break;
    case 2:
        printf("\n*************** TERIMA KASIH ***************\n");
        exit(0);
    default:
        printf("\nMau mengulang atau tidak?\n");
        ulang();
        break;
       }
}


void perhitungan_gaji(){
int pilihan;


printf("\n\t=================================\n");
printf("\t||\t    JAM KERJA          ||\n");
printf("\t=================================\n");
printf ("\t|   Masukan lama anda bekerja   |\n");
printf("\t=================================\n");
input_jamKerja(&h.jam_kerja, "\t| => ");
printf("\t=================================\n");

input_pilihan (&pilihan, "\nApakah jam kerja sudah benar?\n1. Ya \n2. Salah\n""=> ");

if (pilihan == 1){
    if (h.jam_kerja<=jam_bekerja){
        perhitungan_gajiUtama();

    }else if(h.jam_kerja>jam_bekerja){
        perhitungan_gajiLembur();
    }
}else if (pilihan == 2) {
    perhitungan_gaji();
}else if (pilihan >= 3){
    system("cls");
    perhitungan_gaji();
}
system("cls");

}

void perhitungan_gajiUtama(){

h.gaji_utama = h.jam_kerja * gaji_perjam;
system("cls");

printf("\n\t===========================================\n");
printf("\t||\t       RINCIAN GAJI              ||\n");
printf("\t===========================================\n");

printf("\t| Jam Kerja \t\t= %.f Jam           |\n", h.jam_kerja);
printf("\t| Lama anda lembur \t= 0 Jam           |\n");
printf("\t===========================================");

printf("\n\t| Gaji Utama\t= %.f x Rp. 10,625          |", h.jam_kerja);
printf("\n\t|\t\t= Rp. %.1f             |\n", h.gaji_utama);
printf("\t===========================================");

printf("\n\t|| GAJI ANDA\t: Rp. %.lf              ||\n", h.gaji_utama);
printf("\t===========================================\n");


ulang();
}

void perhitungan_gajiLembur(){
h.jam_lembur = h.jam_kerja - jam_bekerja;
h.gaji_lembur = h.jam_lembur * jam_bekerja * gaji_perjam;
h.gaji_utama = jam_bekerja * gaji_perjam;
h.gaji_total = h.gaji_lembur + h.gaji_utama;
system("cls");

printf("\n\t=====================================================\n");
printf("\t||\t\t     RINCIAN GAJI                  ||\n");
printf("\t=====================================================\n");

printf("\t| Maks. jam kerja/hari \t\t= %d Jam             |\n", jam_bekerja);
printf("\t| Jam Kerja \t\t\t= %.f Jam            |\n", h.jam_kerja);
printf("\t| Lembur \t\t\t= %.f jam             |\n", h.jam_lembur);
printf("\t=====================================================\n");

printf("\t| Gaji utama \t= 8 x Rp. 10,625                    |\n");
printf("\t| \t\t= Rp. %.1f                       |", h.gaji_utama);

printf("\n\t|                                                   |");

printf("\n\t| Gaji lembur \t= %.f x 8 x Rp. 10,625                |\n", h.jam_lembur);
printf("\t| \t\t= Rp. %.1f                      |\n", h.gaji_lembur);

printf("\t|                                                   |");

printf("\n\t| Total Gaji \t= Rp. %.1f + Rp. %.1f        |\n", h.gaji_utama, h.gaji_lembur);
printf("\t| \t\t= Rp. %.1f                      |\n", h.gaji_total);

printf("\t=====================================================\n");
printf("\t|| GAJI ANDA \t: Rp. %.1f                     ||\n", h.gaji_total);
printf("\t=====================================================\n");

ulang();

}

int main(){


printf("\t=======================================================\n");
printf("\t||\t\tPROGRAM MENGHITUNG GAJI              ||\n");
printf("\t=======================================================\n");
printf("\t|| Ida Bagus Paalakaa RNB""\t\t(2205551003) ||");
printf("\n\t|| I Gede Made Rapriananta Pande""\t(2205551005) ||");
printf("\n\t|| Ni Kadek Ari Diah Lestari""\t\t(2205551069) ||");
printf("\n\t|| I Gusti Ayu Krisna Kusuma Dewi""\t(2205551072) ||");
printf("\n\t|| Kadek Yogi Dwi Putra Utama""\t\t(2205551076) ||");
printf("\n\t|| Anak Agung Indi Kusuma Putra""\t\t(2205551079) ||");
printf("\n\t=======================================================\n");



printf("\nTekan apa saja untuk lanjut ");
getch();
system("cls");
perhitungan_gaji();

return 0;
}


