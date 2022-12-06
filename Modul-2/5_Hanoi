#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


int validasiInt(int *var)
{
    fflush(stdin);
    char buffer[1024];
    char cek;
    if(fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if(sscanf(buffer, "%d %c", var, &cek) == 1)
        return *var;
    }
    return 0;
}


void validasiInput(int *var)
{
    while (1)
    {
      fflush(stdin);
      if (validasiInt(var))
        break;
      printf("\t\t Masukan salah. Mohon masukkan input sesuai arahan.\n");
      printf("\t\t Masukkan input: ");
    }

}


void validasiHanoi(int *var)
{
    while (1)
    {
      validasiInput(var);
      fflush(stdin);
      if (*var > 0)
        break;
      printf("\t\t Masukan salah. Mohon masukkan input sesuai arahan.\n");
      printf("\t\t Masukkan input: ");
    }
}


void validasiTiangHanoi(int *var)
{
    while (1)
    {
      validasiHanoi(var);
      fflush(stdin);
      if (1<=*var && *var<= 3)
        break;
      printf("\t\t Masukan salah. Mohon masukkan input sesuai arahan.\n");
      printf("\t\t Masukkan input: ");
    }
}


void validasiMenu(int *var, int batas1, int batas2)
{
    while (1)
    {
      validasiInput(var);
      fflush(stdin);
      if (batas1 <= *var && *var <= batas2)
        break;
      printf("\t\t Masukan salah. Mohon masukkan input sesuai arahan.\n");
      printf("\t\t Masukkan input: ");
    }
}


void hanoiRekursif(int n, int start, int dest)
{
    if(n==1)
    {
        printf("\t\t Cakram %d dipindahkan dari tiang ke-%d ke tiang ke-%d.\n", n, start, dest);
    }
    else
    {
        int other;
        other = 6 - (start + dest);
        if (other<1 || other>3)
        {
            printf("\t\t Masukan tidak sesuai. Mohon masukkan nomor tiang yang berbeda. \n");
            sleep(2);
            system("cls");
            hitungHanoiR();
        }
        hanoiRekursif(n-1, start, other);
        printf("\t\t Cakram %d dipindahkan dari tiang ke-%d ke tiang ke-%d.\n", n, start, dest);
        hanoiRekursif(n-1, other, dest);
    }
}


void hanoiIteratif(int n, int start, int dest)
{
    int tiang[3];
    tiang[0] = start;
    tiang[2] = dest;

    int langkahMin = pow(2, n)-1;
    printf("\n\t\t Langkah minimal untuk memindahkan %d cakram adalah %d langkah.\n\n", n, langkahMin);

    int other;
        other = 6 - (start + dest);
        if (other<1 || other>3)
        {
            printf("\t\t Masukan tidak sesuai. Mohon masukkan nomor tiang yang berbeda. \n");
            sleep(2);
            system("cls");
            hitungHanoiI();
        }
    tiang[1] = other;
        if(n%2==0)
        {
            tiang[1] = dest;
            tiang[2] = other;
        }
        for(int i=1; i<=langkahMin; i++)
        printf("\t\t Cakram teratas dipindahkan dari tiang ke-%d ke tiang ke-%d.\n", tiang[(i&i-1)%3], tiang[((i|i-1)+1)%3]);

}


void hitungHanoiR()
{
    int cakram;
    int tiang1;
    int tiang2;

    printf("\t\t ________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t||                 MENARA HANOI REKURSIF                ||\n");
    printf("\t\t||   Penyelesaian Menara Hanoi dengan Metode Rekursif   ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t ________________________________________________________\n");

    printf("\t\t Masukkan jumlah cakram : ");
    validasiHanoi(&cakram);
    printf("\t\t Nomor tiang permulaan  : ");
    validasiTiangHanoi(&tiang1);
    printf("\t\t Nomor tiang tujuan     : ");
    validasiTiangHanoi(&tiang2);
    printf("\n");
    int langkahMin = pow(2, cakram)-1;
    printf("\n\t\t Langkah minimal untuk memindahkan %d cakram adalah %d langkah.\n\n", cakram, langkahMin);
    hanoiRekursif(cakram, tiang1, tiang2);
    printf("\t\t ________________________________________________________\n\n");
}


void hitungHanoiI()
{
    int cakram;
    int tiang1;
    int tiang2;

    printf("\t\t ________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t||                 MENARA HANOI ITERATIF                ||\n");
    printf("\t\t||   Penyelesaian Menara Hanoi dengan Metode Iteratif   ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t ________________________________________________________\n");

    printf("\t\t Masukkan jumlah cakram : ");
    validasiHanoi(&cakram);
    printf("\t\t Nomor tiang permulaan  : ");
    validasiTiangHanoi(&tiang1);
    printf("\t\t Nomor tiang tujuan     : ");
    validasiTiangHanoi(&tiang2);
    printf("\n");
    hanoiIteratif(cakram, tiang1, tiang2);
    printf("\t\t ________________________________________________________\n\n");
}


void menu()
{
    int pilihan;
    printf("\t\t ________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t||                M E N A R A  H A N O I                ||\n");
    printf("\t\t||       Mencari Langkah Penyelesaian Menara Hanoi      ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ---------------------------------------------------- +|\n");
    printf("\t\t||         Pilih Metode Penyelesaian Menara Hanoi       ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|| [1] Penyelesaian secara Rekursif                     ||\n");
    printf("\t\t|| [2] Penyelesaian secara Iteratif                     ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ---------------------------------------------------- +|\n");
    printf("\t\t||                      Menu Lainnya                    ||\n");
    printf("\t\t|| [3] Kredit                                           ||\n");
    printf("\t\t|| [4] Keluar dari program                              ||\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t ________________________________________________________\n\n");

    printf("\t\t ________________________________________________________\n");
    printf("\t\t Pilih menu yang diinginkan: ");
    validasiMenu(&pilihan, 1, 5);

    if(pilihan == 1)
    {
      system("cls");
      hitungHanoiR();
    }
    else if (pilihan == 2)
    {
      system("cls");
      hitungHanoiI();
    }
    else if (pilihan == 3)
    {
      system("cls");
      kredit();
    }
    else if (pilihan == 4)
    {
      system("cls");
      keluar();
    }
    repeat();
}


void repeat()
{
    int pilihanUlang;
    printf("\n\n\t\t Apakah Anda ingin kembali ke menu utama?");
    printf("\n\t\t Ketik [1] untuk 'Ya' dan [2] untuk 'Tidak' :");
    validasiMenu(&pilihanUlang, 1, 2);
    if(pilihanUlang==1){
        system("cls");
        menu();
    }else if(pilihanUlang==2){
        system("cls");
        keluar();
    }
}


void kredit()
{
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________________________ +|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                         K E L O M P O K  2 3                         ||\n");
    printf("\t\t||               PROGRAM MENARA HANOI REKURSIF DAN ITERATIF             ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                         Nama Anggota Kelompok                        ||\n");
    printf("\t\t|| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  ||\n");
    printf("\t\t|| > 2205551005 | Gede Made Rapriananta Pande                           ||\n");
    printf("\t\t|| > 2205551003 | Ida Bagus Paalakaa RNB                                ||\n");
    printf("\t\t|| > 2205551069 | Ni Kadek Ari Diah Lestari                             ||\n");
    printf("\t\t|| > 2205551072 | I Gusti Ayu Krisna Kusuma Dewi                        ||\n");
    printf("\t\t|| > 2205551076 | Kadek Yogi Dwi Putra Utama                            ||\n");
    printf("\t\t|| > 2205551079 | Anak Agung Indi Kusuma Putra                          ||\n");
    printf("\t\t|+ ____________________________________________________________________ +|\n");
    printf("\t\t ________________________________________________________________________ \n");

    system("pause");
    system("cls");
    menu();

}


void keluar()
{
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                         T E R I M A  K A S I H                       ||\n");
    printf("\t\t||                      Sampai jumpa di lain waktu!                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t ________________________________________________________________________ \n");
    exit(0);
}


int main ()
{
    menu();
    return 0;
}
