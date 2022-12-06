#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cover();
void menu1();
int tanggal();
void bulan(int b);
float validasi();
void validasi_bulan(int b);
void zodiak(int b, int hasil, char cadangan[]);
void ulang();

int main (){
   cover();
   return 0;
}

void cover(){
    printf("|===========================================|\n");
    printf("|           PROGRAM MENENTUKAN ZODIAK       |\n");
    printf("|                 KELOMPOK 23               |\n");
    printf("|===========================================|\n");
    printf("|           Nama Anggota Kelompok           |\n");
    printf("|===========================================|\n");
    printf("|2205551005 Gede Made Rapriananta Pande     |\n");
    printf("|2205551003 Ida Bagus Paalakaa RNB     ,    |\n");
    printf("|2205551069 Ni Kadek Ari Diah Lestari       |\n");
    printf("|2205551072 I Gusti Ayu Krisna Kusuma Dewi  |\n");
    printf("|2205551076 Kadek Yogi Dwi Putra Utama      |\n");
    printf("|2205551079 Anak Agung Indi Kusuma Putra    |\n");
    printf("|===========================================|\n\n");
  system("pause");
  system("cls");
  tanggal();
}

void menu1(){
 printf("|===========================================|\n");
 printf("|           PROGRAM MENENTUKAN ZODIAK       |\n");
 printf("|===========================================|\n");
 system("pause");
 system("cls");
 tanggal();
}

int tanggal(){
 float a, hasil;
 int b;
 printf("|============================================|\n");
 printf("|             INPUT TANGGAL LAHIR            |\n");
 printf("|============================================|\n");
 printf("| MASUKKAN TANGGAL LAHIR : ");
 
    while(a!=b || a<0 || a>31){
    a=validasi();
    b=(int)a;
        if(a!=b || a<0 || a>31){
        printf("|============================================|\n");
        printf("|                INPUT ERROR                 |\n");
        printf("|          SILAHKAN ULANGI INPUT ANDA        |\n");
        printf("|============================================|\n");
        printf("| SILAHKAN MASUKKAN ANGKA YANG BARU : \n\n");
        }
    }
 printf("|============================================|\n\n");
 system("cls");
 bulan(b);
}

void bulan(int b){
 char a;
 printf("|============================================|\n");
 printf("|             INPUT BULAN LAHIR              |\n");
 printf("|============================================|\n");
 printf("| MASUKKAN BULAN LAHIR (ANGKA 1-12): ");
 validasi_bulan(b);
}


float validasi(){
 char input[100];
 int a=0;
 int salah=0;
 int depan=0;
 float hasil;
 scanf("%[^\n]", &input);
 fflush(stdin);
    if(input[a]=='\0'){
    salah=1;
    }
    while(input[a]!='\0'){
        if(input[a]>='0' && input[a]<='9'){
        depan=(depan*10)+(input[a]-48);
        a++;
        }else{
        salah=1;
        input[a]='\0';
        }
    }

 hasil=depan;
    if(salah==1){
    printf("|============================================|\n");
    printf("|                 INPUT ERROR                |\n");
    printf("|          SILAHKAN ULANGI INPUT ANDA        |\n");
    printf("|============================================|\n");
    printf("| SILAHKAN MASUKKAN ANGKA YANG BARU : \n\n");
    return validasi();
    }else{
    return hasil;
    }
}

void validasi_bulan(int b){
 int a=0, salah=0, depan=0, hasil=0, i;
 char input[100];
 char cadangan[100];
 scanf(" %[^\n]", &input);
 fflush(stdin);
    if(input[a]=='\0'){
    salah=1;
    }
    for(i=0;i<1;){
        if(input[a]!='\0'){
        cadangan[a]=input[a];
        a++;
        }else{
        cadangan[a]='\0';
        i=1;
        }
    }
 a=0;
while(input[a]!='\0'){
    if(input[0]>='A' && input[0]<='Z'){
    a++;
    }else if(input[a]>='0' && input[a]<='9'){

        if(input[a+1]>='a' && input[a+1]<='z'){
        salah=1;
        input[a]='\0';
        }else{
            depan=(depan*10)+(input[a]-48);
            a++;
            if(depan<1 || depan>12){
            salah=1;
            input[a]='\0';
            }
        }
    }else if(input[a]>='a' && input[a]<='z'){
        if(input[0]>='a' && input[0]<='z'){
        salah=1;
        input[a]='\0';
        }else if(input[a+1]>='0' && input[a]<='9'){
        salah=1;
        input[a]='\0';
        }
        else{
        a++;
        }
    }else{
    salah=1;
    input[a]='\0';
    }
}
 hasil=depan;
    if(salah==1){
    printf("|============================================|\n");
    printf("|                INPUT ERROR                 |\n");
    printf("|          SILAHKAN ULANGI INPUT ANDA        |\n");
    printf("|============================================|\n");
    printf("| SILAHKAN MASUKKAN DATA YANG BARU : \n\n");
    return validasi_bulan(b);
    }else{
    system("cls");
        if(hasil!=0){
        printf("|============================================|\n");
        printf("| TANGGAL/BULAN LAHIR ANDA : %d/%d\n", b, 
        hasil);
        printf("|============================================|\n\n");
        }else{
        printf("|============================================|\n");
        printf("| TANGGAL/BULAN LAHIR ANDA : %d/%s\n", b, cadangan);
        printf("|============================================|\n\n");
        }
    zodiak(b, hasil, cadangan);
    }
}

void zodiak(int b, int hasil, char cadangan[]){
 int bulan;
 if(hasil!=0){
 bulan=hasil;
 }else{
    if(strcmp(cadangan, "Maret")==0){
    bulan=3;
    }else if(strcmp(cadangan, "April")==0){
    bulan=4;
    }else if(strcmp(cadangan, "Mei")==0){
    bulan=5;
    }else if(strcmp(cadangan, "Juni")==0){
    bulan=6;
    }else if(strcmp(cadangan, "Juli")==0){
    bulan=7;
    }else if(strcmp(cadangan, "Agustus")==0){
    bulan=8;
    }else if(strcmp(cadangan, "September")==0){
    bulan=9;
    }else if(strcmp(cadangan, "Oktober")==0){
    bulan=10;
    }else if(strcmp(cadangan, "November")==0){
    bulan=11;
    }else if(strcmp(cadangan, "Desember")==0){
    bulan=12;
    }else if(strcmp(cadangan, "Januari")==0){
    bulan=1;
    }else if(strcmp(cadangan, "Februari")==0){
    bulan=2;
    }else{
    bulan=0;
    }
 }
 if(b>=21 && b<=31 && bulan==3 || b>=1 && b<=19 && bulan==4){
 printf("|============================================|\n");
 printf("|         ZODIAK ANDA ADALAH ARIES           |\n");
 printf("|============================================|\n");
 }else if(b>=20 && b<=30 && bulan==4 || b>=1 && b<=20 && bulan==5){
 printf("|============================================|\n");
 printf("|         ZODIAK ANDA ADALAH TAURUS          |\n");
 printf("|============================================|\n");
 }else if(b>=21 && b<=31 && bulan==5 || b>=1 && b<=20 && bulan==6){
 printf("|============================================|\n");
 printf("|          ZODIAK ANDA ADALAH GEMINI         |\n");
 printf("|============================================|\n");
 }else if(b>=21 && b<=30 && bulan==6 || b>=1 && b<=22 && bulan==7){
 printf("|============================================|\n");
 printf("|         ZODIAK ANDA ADALAH CANCER          |\n");
 printf("|============================================|\n");
 }else if(b>=23 && b<=31 && bulan==7 || b>=1 && b<=22 && bulan==8){
 printf("|============================================|\n");
 printf("|           ZODIAK ANDA ADALAH LEO           |\n");
 printf("|============================================|\n");
 }else if(b>=23 && b<=31 && bulan==8 || b>=1 && b<=22 && bulan==9){
 printf("|============================================|\n");
 printf("|           ZODIAK ANDA ADALAH VIRGO         |\n");
 printf("|============================================|\n");
 }else if(b>=23 && b<=30 && bulan==9 || b>=1 && b<=22 && bulan==10){
 printf("|============================================|\n");
 printf("|          ZODIAK ANDA ADALAH LIBRA          |\n");
 printf("|============================================|\n");
 }else if(b>=23 && b<=31 && bulan==10 || b>=1 && b<=21 && bulan==11){
 printf("|============================================|\n");
 printf("|          ZODIAK ANDA ADALAH SCORPIO        |\n");
 printf("|============================================|\n");
 }else if(b>=22 && b<=30 && bulan==11 || b>=1 && b<=21 && bulan==12){
 printf("|============================================|\n");
 printf("|       ZODIAK ANDA ADALAH SAGITARIUS        |\n");
 printf("|============================================|\n");
 }else if(b>=22 && b<=31 && bulan==12 || b>=1 && b<=19 && bulan==1){
 printf("|============================================|\n");
 printf("|        ZODIAK ANDA ADALAH CAPRICORN        |\n");
 printf("|============================================|\n");
 }else if(b>=20 && b<=31 && bulan==1 || b>=1 && b<=18 && bulan==2){
 printf("|============================================|\n");
 printf("|         ZODIAK ANDA ADALAH AQUARIUS        |\n");
 printf("|============================================|\n");
 }else if(b>=19 && b<=29 && bulan==2 || b>=1 && b<=20 && bulan==3){
 printf("|============================================|\n");
 printf("|         ZODIAK ANDA ADALAH PISCES          |\n");
 printf("|============================================|\n");
 }else{
 printf("|============================================|\n");
 printf("|  INPUT ANDA TIDAK SESUAI DENGAN KETENTUAN  |\n");
 printf("|         SILAHKAN ULANGI INPUT ANDA         |\n");
 printf("|============================================|\n");
 system("pause");
 system("cls");
 menu1();
 }
 ulang();
}

void ulang(){
 float a;
 int b;
 printf("|============================================|\n");
 printf("| APAKAH ANDA INGIN MENCOBA PROGRAMNYA LAGI? |\n");
 printf("|============================================|\n");
 printf("| 1. YA                                      |\n");
 printf("| 2. TIDAK                                   |\n");
 printf("|============================================|\n");
 printf("| MASUKKAN KODE (1/2): \n\n");
 while(a!=b || a<1 || a>2){
 a=validasi();
 b=(int)a;
    if(a!=b || a<1 || a>2){
    printf("|==========================================|\n");
    printf("|                INPUT ERROR               |\n");
    printf("|        SILAHKAN ULANGI INPUT ANDA        |\n");
    printf("|==========================================|\n");
    printf("| SILAHKAN MASUKKAN ANGKA YANG BARU : \n\n");
    }
 }
 printf("|==========================================|\n\n");
 system("cls");
 
 if(a==1){
 menu1();
 }else if(a==2){
 printf("|============================================|\n");
 printf("| TERIMA KASIH SUDAH MENGGUNAKAN PROGRAM KAMI|\n");
 printf("|       SEMOGA HARI ANDA MENYENANGKAN        |\n");
 printf("|============================================|\n");
 }
 exit(0);
}
